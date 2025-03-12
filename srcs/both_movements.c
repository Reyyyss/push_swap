/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:38:28 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/03/12 12:17:27 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_reverse_rotate(&stack_a, 'a', 0);
	ft_reverse_rotate(&stack_b, 'b', 0);
	write (1, "rrr\n", 4);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(&stack_a, 'a', 0);
	ft_swap(&stack_b, 'b', 0);
	write(1, "ss\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(&stack_a, 'a', 0);
	ft_rotate(&stack_b, 'b', 0);
	write(1, "rr\n", 3);
}
