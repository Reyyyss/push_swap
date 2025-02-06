/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:39 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/06 15:51:33 by hcarrasq         ###   ########.fr       */
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

int			ft_isnbr(char *nbr);
void		initialize_stack(t_stack *stack_a, t_stack *stack_b);
void		ft_lst_addfront(t_stack *lst, t_node *new);
void		ft_lst_addback(t_stack *lst, t_node *new);
t_node		*ft_lst_new(int content);
int			check_args(int argc, char **argv);
long		ft_atol(const char *nptr);
int			check_dups(char *nbr);

#endif