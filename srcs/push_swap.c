/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/06 16:33:28 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	static	t_stack stack_b;
	int i;

	i = 1;
	initialize_stack(&stack_a, &stack_b);
	if (check_args(argc, argv) > 1)
		return 0;
	else 
	{
		
	}
}

int	check_args(int argc, char **argv)
{
	char **str;
	int i;

	i = 0;
	if (argc == 1)
		return 0;
	else if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	while (str[i])
	{
		write(1, "yes", 4);
		if (!(ft_isnbr(str[i])))
			return (write(2, "Error\n", 8), 2);
		else if (check_dups(str[i]))
			return (write(2, "Error\n", 8), 2);
		else if (!(ft_atol(str[i])))
			return (write(2, "Error\n", 8), 2);
		i++;
	}
	return (1);
}
