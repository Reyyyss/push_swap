/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/19 13:48:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	//static	t_stack stack_b;
	int	i;

	i = 1;
	stack_a = check_args(&argv[i], argc - 1);
	if (!stack_a.head)
		ft_error("Error\n");
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
			ft_error("Error\n");
		else if (!check_dups(stack, (int)nbr))
			ft_error("Error\n");
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
	int	i;

	i = 0;
	stack = (t_stack){0};
	if (argc == 1 || !ft_valid(argc, argv))
	{
		stack_clear(&stack);
		return(stack);
	}
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str)
			full_clear(0, &stack);
		if (!ft_isnbr(str) || !make_stack(&stack, str))
			full_clear(str, &stack);
		ft_free(str);
		i++;
	}
	return (stack);
}
