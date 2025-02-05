/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:39 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/05 11:31:09 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

	typedef struct s_node
	{
		int	value;
		struct s_node *next;	
	}	t_node;

	typedef struct s_stack
	{
		int	lenght;
		t_node *head;
		t_node *tail;
	}	t_stack;

int	ft_isnbr(char *nbr);
void	initialize_stack(t_stack *stack_a, t_stack *stack_b);
void	ft_lstadd_front(t_stack *lst, t_node *new);
t_node	*ft_lstnew(int content);

#endif