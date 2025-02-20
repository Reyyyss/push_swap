/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/20 17:48:06 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	//static	t_stack stack_b;
	if (argc == 1)
		return (write(2, "Error\n", 6), 1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = &argv[1];
	stack_a = check_args(argv, argc - 1);
	if (!stack_a.head)
		ft_error("Error3\n");
	print_stack(&stack_a, 'a');
	return (0);
}

bool	make_stack(t_stack *stack, char **str)
{
	t_node *node;
	long	nbr;
	int i;

	i = 0;
	while (str[i])
	{
		nbr = ft_atol(str[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error("Error1\n");
		if (!check_dups(stack, (int)nbr))
			ft_error("Error2\n");
		node = ft_lst_new((int)nbr);
		if (!node)
			return (false);
		ft_lst_addback(stack, node);
		i++;
	}
	return (true);
}

t_stack	check_args(char **argv, int argc)
{
	char	**str;
	t_stack	stack;

	str = argv;
	stack = (t_stack){0};
	if (!ft_valid(argc, str))
	{
		stack_clear(&stack);
		return(stack);
	}
	if (!str)
		full_clear(0, &stack);
	if (!make_stack(&stack, str))
		full_clear(str, &stack);
	return (stack);
}
