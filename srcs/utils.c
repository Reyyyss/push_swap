/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:44:35 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/03/12 12:24:53 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *msg)
{
	ft_putstr_fd(msg, 2);
	exit (0);
}

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	full_clear(char **str, t_stack *stack)
{
	if (!str)
	{
		stack_clear(stack);
		exit (0);
	}
	else
	{
		ft_free(str);
		stack_clear(stack);
		exit (0);
	}
}

int	is_array_sorted(t_stack *stack)
{
	int		i;
	t_node	*temp;

	i = 1;
	temp = stack->head;
	while (i < stack->lenght)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
		i++;
	}
	return (i);
}
