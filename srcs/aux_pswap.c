/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_pswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:21:05 by henrique-re       #+#    #+#             */
/*   Updated: 2025/03/12 12:17:15 by hcarrasq         ###   ########.fr       */
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
	int		count;
	int		i;
	long	num;

	num = 0;
	i = 0;
	count = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			count *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
		if (num > INT_MAX || num < INT_MIN)
			break ;
	}
	return (num * count);
}

bool	ft_valid(int argc, char **argv)
{
	char	**nbr;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		nbr = argv;
		j = 0;
		while (argv[j])
		{
			if (!ft_isnbr(argv[j]))
			{
				ft_free(nbr);
				return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}
