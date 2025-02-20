/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:44:35 by hcarrasq          #+#    #+#             */
/*   Updated: 2025/02/20 14:57:23 by hcarrasq         ###   ########.fr       */
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
	if(!str)
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