/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:06:14 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/21 17:34:02 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack *src, char flag, int both)
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
	if (both > 0)
		ft_printf("s%c\n", flag);
}

void	ft_push(t_stack *src, t_stack *dest, char flag)
{
	t_node	*temp;

	if(src->lenght == 0)
		return;
	else
	{
		temp = src->head;
		src->head = src->head->next;
		src->lenght--;
		if(dest->lenght == 0)
		{
			dest->head = temp;
			dest->tail = temp;
			dest->lenght++;
		}
		else
		{
			temp->next = dest->head;
			dest->head = temp;
			dest->lenght++;
		}
	}
}

void	ft_rotate(t_stack *src, char flag, int both)
{
	if (src->lenght < 2)
		return ;
	src->head->prev = src->tail;
	src->tail->next = src->head;
	src->head = src->head->next;
	src->tail = src->tail->next;
	src->head->prev = NULL;
	src->tail->next = NULL;
	if (both > 0)
		ft_printf("r%c\n", flag);
}

ft_reverse_rotate(t_stack *src, char flag, int both)
{
	if (src->lenght < 2)
		return ;
	src->head->prev = src->tail;
	src->tail->next = src->head;
	src->tail = src->tail->prev;
	src->head = src->head->prev;
	src->head->prev = NULL;
	src->tail->next = NULL;
	if (both > 0)
		ft_printf("rr%c\n", flag);
}