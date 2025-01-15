/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/01/14 21:29:18 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	char **str;
	int i;

	i = 0;
	initialize_stack(&stack_a, &stack_b);
	if (argc == 1)
		return 0;
	else if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
		str = argv;
	while (str[i])
	{
		if (!(ft_isnbr(str[i])))
			return 0;
		ft_lstnew(stack_a);
		ft_
			
	}
	
}
