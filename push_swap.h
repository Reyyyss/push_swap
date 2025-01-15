/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:39 by henrique-re       #+#    #+#             */
/*   Updated: 2025/01/14 18:05:26 by henrique-re      ###   ########.fr       */
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
	struct s_node *prev;
}	t_node;

typedef struct s_stack
{
	int	lenght;
	t_node *head;
	t_node *tail;
}	t_stack;

int	ft_isnbr(char *nbr);

#endif