/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:39 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/12 18:01:16 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdbool.h>
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

int			ft_isnbr(char *nbr);
void		initialize_stack(t_stack *stack_a, t_stack *stack_b);
void		ft_lst_addfront(t_stack *lst, t_node *new);
void		ft_lst_addback(t_stack *lst, t_node *new);
t_node		*ft_lst_new(int content);
char		**check_args(int argc, char **argv);
long		ft_atol(const char *nptr);
int			check_dups(char *nbr);
void		stack_clear(t_stack *lst);
void		ft_error(char *msg);
void		print_stack(t_stack *stack, char id);
t_stack		*make_stack(char **str, int argc);
void		ft_free(char **str);

#endif