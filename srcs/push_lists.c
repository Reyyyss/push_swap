/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:25:04 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/20 17:22:11 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lst_new(int content)
{
	t_node	*elm;

	elm = malloc(sizeof(t_node));
	if (!elm)
		return (NULL);
	elm->value = content;
	elm->next = NULL;
	elm->prev = NULL;
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
		new->prev = NULL;
		new->next = NULL;
	}
	new->next = lst->head;
	lst->head->prev = new;
	lst->head = new;
	new->prev = NULL;
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
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		lst->tail->next = new;
		new->prev = lst->tail;
		new->next = NULL;
		lst->tail = new;
	}
	lst->lenght++;
}

void	stack_clear(t_stack *lst)
{
	t_node *temp;
	while(lst->head)
	{
		temp = lst->head->next;
		free(lst->head);
		lst->head = temp;
	}
	lst->head = NULL;
	lst->tail = NULL;
	lst->lenght = 0;
}

void	print_stack(t_stack *stack, char id)
{
	t_node	*current;
	ft_printf("stack %c:\n", id);
	current = stack->head;
	while(current)
	{
		ft_printf("%i\n", current->value);
		current = current->next;
	}
	ft_printf("size:%i\n", stack->lenght);
}