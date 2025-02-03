/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_pswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:21:05 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/03 18:00:29 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_stack(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->head = NULL;
	stack_a->tail = NULL;
	stack_b->head = NULL;
	stack_b->tail = NULL;
	stack_a->lenght = 0;
	stack_b->lenght = 0;
}

int	ft_isnbr(char *nbr)
{
	int	i;

	i = 0;
	if (!nbr || !nbr[0])
		return 0;
	if (nbr[0] == '-' || nbr[0] == '+')
		i++;
	while (nbr[i])
	{	
		if (!(ft_isdigit(nbr[i])))
			return 0;
		i++;
	}	
	return 1;
}

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
void	ft_lstadd_front(t_list **lst, t_node *new)
{
	t_list *last;

	last = *lst;
	new->next = *lst;
	*lst = new;
}
