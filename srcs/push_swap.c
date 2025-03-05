/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/03/05 15:41:13 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	static	t_stack stack_b;
	if (argc == 1)
		return (write(2, "Error\n", 6), 1);
	stack_a = check_args(&argv[1], argc - 1);
	if (!stack_a.head)
		ft_error("Error3\n");
	if (is_array_sorted(&stack_a))
		return (0);
	if (stack_a.lenght == 2)
		sort_two(&stack_a);
	else if (stack_a.lenght == 3)
	{
		print_stack(&stack_a,  'a');
		sort_three(&stack_a);
		print_stack(&stack_a,  'a');
	}
	print_stack(&stack_a,  'a');
	normalize(&stack_a);
	radixsort(&stack_a, &stack_b);
	print_stack(&stack_a,  'a');
	stack_clear(&stack_a);
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
	int		i;

	stack = (t_stack){0};
	i = 0;
	while (i < argc)	
	{
		str = ft_split(argv[i], ' ');
		if (!ft_valid(argc, str))
		{
			stack_clear(&stack);
			return(stack);
		}
		if (!str)
			full_clear(0, &stack);
		if (!make_stack(&stack, str))
			full_clear(str, &stack);
		ft_free(str);
		i++;
	}
	return (stack);
}

void	normalize(t_stack *stack)
{
	t_node *temp;
	t_node *current;
	int rank;

	current = stack->head;
	while (current)
	{
		rank = 1;
		temp = stack->head;
		while (temp)
		{
			if (current->value > temp->value)
				rank++;
			temp = temp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}
