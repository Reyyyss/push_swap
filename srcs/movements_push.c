/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:06:14 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/04 16:28:05 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *src)
{
	t_node	*temp;

	if(src->lenght < 2)
		return;
	else
	{
		temp = src->head;
		src->head = src->head->next;
		src->head->next = temp;
	}
}

void	ft_push(t_stack *src, t_stack *dest)
{
	t_node *temp;

	if(src->lenght < 1)
		return;
	else
	{
		
	}
}