/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:35:06 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/03/12 12:24:31 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack *stack_a)
{
	ft_swap(stack_a, 'a', 1);
}

void	sort_three(t_stack *stack_a)
{
	if (stack_a->head->rank < stack_a->head->next->rank \
	&& stack_a->head->next->rank > stack_a->tail->rank \
	&& stack_a->tail->rank > stack_a->head->rank)
	{
		ft_reverse_rotate(stack_a, 'a', 1);
		ft_swap(stack_a, 'a', 1);
	}
	else if (stack_a->head->rank < stack_a->head->next->rank \
	&& stack_a->head->rank > stack_a->tail->rank \
	&& stack_a->tail->rank < stack_a->head->next->rank)
		ft_reverse_rotate(stack_a, 'a', 1);
	else if (stack_a->head->rank > stack_a->head->next->rank \
	&& stack_a->head->next->rank < stack_a->tail->rank \
	&& stack_a->tail->rank > stack_a->head->rank)
		ft_swap(stack_a, 'a', 1);
	else if (stack_a->head->rank > stack_a->head->next->rank \
	&& stack_a->head->next->rank < stack_a->tail->rank \
	&& stack_a->tail->rank < stack_a->head->rank)
		ft_rotate(stack_a, 'a', 1);
	else
	{
		ft_rotate(stack_a, 'a', 1);
		ft_swap(stack_a, 'a', 1);
	}
}

void	sort_four_five(t_stack *stack_a, t_stack *stack_b)
{
	while (is_array_sorted(stack_a) == 0 && stack_b->lenght == 0)
	{
		while (stack_b->lenght <= 1)
		{
			if (stack_a->head->rank == 1 || stack_a->head->rank == 2)
				ft_push(stack_a, stack_b, 'b');
			else
				ft_rotate(stack_a, 'a', 1);
		}
		if (is_array_sorted(stack_a) == 0)
		{
			if (stack_a->lenght == 3)
				sort_three(stack_a);
			else
				sort_two(stack_a);
		}
		if (stack_b->head->rank == 1)
			ft_swap(stack_b, 'b', 1);
		ft_push(stack_b, stack_a, 'a');
		ft_push(stack_b, stack_a, 'a');
	}
}

void	final_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->lenght == 2)
		sort_two(stack_a);
	else if (stack_a->lenght == 3)
		sort_three(stack_a);
	else if (stack_a->lenght == 5 || stack_a->lenght == 4)
		sort_four_five(stack_a, stack_b);
}
