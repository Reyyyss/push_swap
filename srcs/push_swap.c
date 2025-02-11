/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/11 18:15:23 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	static	t_stack stack_b;
	int i;
	char	**str;

	i = 1;
	initialize_stack(&stack_a, &stack_b);
	str = check_args(argc, argv);
	make_stack(&stack_a, str);
	print_stack(&stack_a, 'a');
}

char	**check_args(int argc, char **argv)
{
	char **str;
	int i;

	i = 0;
	if (argc == 1)
		return 0;
	else if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
		str = &argv[1];
	while (str[++i])
	{
		if (!(ft_isnbr(str[i])))
			ft_error("Error1\n");		
		else if (check_dups(str[i]))
			ft_error("Error2\n");
		i++;
	}
	return (str);
}

void	make_stack(t_stack *stack, char **str)
{
	int	i;
	int	value;
	t_node	*node;
	i = 0;
	while (str[i])
	{
		value = ft_atol(str[i]);
		if (value > INT_MAX || value < INT_MIN)
			return (write(2, "Error\n", 8), ft_free(str), stack_clear(stack));
		node = ft_lst_new(value);
		ft_lst_addback(stack, node);
		i++;
	}
}
