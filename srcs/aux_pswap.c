/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_pswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:21:05 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/13 15:09:45 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isnbr(char *nbr)
{
	
}

int	check_dups(char *nbr)
{
	int	i;
	int	l;

	i = 0;
	l = 1;
	if (nbr[i + 1] == '\0')
	{
		return 1;
	}
	while (nbr[i])
	{
		while (nbr[l])
		{
			if (nbr[i] == nbr[l])
				return 0;
			l++;
		}
		l = 1;
		i++;
	}
	return 1;
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
		if (nptr[i++] == '1')
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