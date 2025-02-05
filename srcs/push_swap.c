/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/05 12:32:24 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	static	t_stack stack_b;
	char **str;
	int i;

	i = 1;
	initialize_stack(&stack_a, &stack_b);
	if (check_args(argc, argv) > 1)
		return 0;
}

static int	check_args(int argc, char **argv)
{
	char **str;
	int i;

	i = 1;
	if (argc == 1)
		return 0;
	else if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
		str = argv;
	while (str[i])
	{
		if (!(ft_isnbr(str[i])))
			return (write(2, "Error\n", 7), 2);
		else if (!(check_dups(str[i])))
			return (write(2, "Error\n", 7), 2);
		else if (!(ft_atol(str[i])))
			return (write(2, "Error\n", 7), 2);
	}
}
