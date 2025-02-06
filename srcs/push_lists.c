/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:25:04 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/06 15:51:46 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lst_new(int content)
{
	t_node	*elm;

	elm = malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	elm->value = content;
	elm->next = NULL;
	return (elm);
}

void	ft_lst_addfront(t_stack *lst, t_node *new)
{
	if(!lst || !new)
		return;
	if(lst->head == NULL)
	{
		lst->head = new;
		lst->tail = new;
	}
	else
	{
		new->next = lst->head;
		lst->head = new;
	}
	lst->lenght++;
}

void	ft_lst_addback(t_stack *lst, t_node *new)
{
	if (!lst || !new)
		return;
	if (lst->head == NULL)
	{
		lst->head = new;
		lst->tail = new;
	}
	else
	{
		lst->tail->next = new;
		lst->tail = new;
	}

	lst->tail->next = NULL;
	lst->lenght++;
}
