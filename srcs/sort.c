/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:35:06 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/03/05 11:57:52 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack *stack_a)
{
	ft_swap(stack_a, 'a', 1);
}

void	sort_three(t_stack *stack_a)
{
	if (stack_a->head->value < stack_a->head->next->value && stack_a->head->next->value > stack_a->tail->value
	&& stack_a->tail->value > stack_a->head->value)
	{
		ft_reverse_rotate(stack_a, 'a', 1);
		ft_swap(stack_a, 'a', 1);
	}
	else if (stack_a->head->value < stack_a->head->next->value && stack_a->head->value > stack_a->tail->value
	&& stack_a->tail->value < stack_a->head->next->value)
		ft_reverse_rotate(stack_a, 'a', 1);
	else if (stack_a->head->value > stack_a->head->next->value && stack_a->head->next->value < stack_a->tail->value
	&& stack_a->tail->value > stack_a->head->value)
		ft_swap(stack_a, 'a', 1);
	else if (stack_a->head->value > stack_a->head->next->value && stack_a->head->next->value < stack_a->tail->value
	&& stack_a->tail->value < stack_a->head->value)
		ft_rotate(stack_a, 'a', 1);
	else
	{
		ft_rotate(stack_a, 'a', 1);
		ft_swap(stack_a, 'a', 1);
	}
}
