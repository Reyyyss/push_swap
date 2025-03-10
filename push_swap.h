/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:39 by henrique-re       #+#    #+#             */
/*   Updated: 2025/03/06 14:40:07 by hcarrasq         ###   ########.fr       */
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
	int	rank;
	struct s_node *next;
	struct s_node *prev;
}	t_node;

typedef struct s_stack
{
	int	lenght;
	t_node *head;
	t_node *tail;
}	t_stack;

bool		ft_isnbr(char *nbr);
bool		ft_valid(int argc, char **argv);
bool		check_dups(t_stack *stack, int nbr);
bool		make_stack(t_stack *stack, char **str);
t_stack		check_args(char **argv, int argc);
void		initialize_stack(t_stack *stack_a, t_stack *stack_b);
void		ft_lst_addfront(t_stack *lst, t_node *new);
void		ft_lst_addback(t_stack *lst, t_node *new);
t_node		*ft_lst_new(int content);
long		ft_atol(const char *nptr);
void		stack_clear(t_stack *lst);
void		full_clear(char **str, t_stack *stack);
void		ft_error(char *msg);
void		print_stack(t_stack *stack, char id);
void		ft_free(char **str);
void		ft_reverse_rotate(t_stack *src, char flag, int both);
void		ft_swap(t_stack *src, char flag, int both);
void		ft_push(t_stack *src, t_stack *dest, char flag);
void		ft_rotate(t_stack *src, char flag, int both);
int 		getmax(t_stack *stack);
void    	radixsort(t_stack *stack_a, t_stack *stack_b);
void    	negative_handle(t_stack *stack_a);
int 		getmin(t_stack *stack);
int			is_array_sorted(t_stack *stack);
void		normalize(t_stack *stack);
void		sort_two(t_stack *stack_a);
void		sort_three(t_stack *stack_a);
void		sort_four_five(t_stack *stack_a, t_stack *stack_b);
void		final_sort(t_stack *stack_a, t_stack *stack_b);

#endif