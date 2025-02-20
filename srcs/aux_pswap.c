/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_pswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:21:05 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/20 17:44:33 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_isnbr(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	check_dups(t_stack *stack, int nbr)
{
	t_node	*node;

	node = stack->head;
	while (node)
	{
		if (node->value == nbr)
			return (false);
		node = node->next;
	}
	return (true);
}

long	ft_atol(const char *nptr)
{
	int	count;
	int	i;
	long	num;
	long	max;

	max = (long)INT_MAX + 1;
	num = 0;
	i = 0;
	count = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
			count *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (num > max)
			return (0);
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	return (num * count);
}

bool	ft_valid(int argc, char **argv)
{
	char	**nbr;
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		nbr = ft_split(argv[i], ' ');
		j = 0;
		while (nbr[j])
		{
			if (!ft_isnbr(nbr[j]))
			{
				ft_free(nbr);
				return (false);
			}
			j++;
		}
		ft_free(nbr);
		i++;
	}
	return (true);
}