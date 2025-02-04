/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:25:04 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/04 18:30:28 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int content)
{
	t_list	*elm;

	elm = malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}

void	ft_lstadd_front1(t_stack *lst, t_node *new)
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

ft_lstadd_back1(t_stack *lst, t_node *new)
{
	if(!lst || !new)
		
}
