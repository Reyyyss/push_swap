/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:52:43 by henrique-re       #+#    #+#             */
/*   Updated: 2025/02/16 17:38:36 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	static	t_stack stack_a;
	static	t_stack stack_b;
	int	i;

	i = 1;
	stack_a = check_args(&argv[i], argc - 1);
	if (!stack_a.head)
		ft_error("Error\n");
}

/* char	**check_args(int argc, char **argv)
{
	char **str;
	int i;

	i = 0;
	while (str[++i])
	{
		if (!(ft_isnbr(str[i])))
			ft_error("Error1\n");		
		else if (check_dups(str[i]))
			ft_error("Error2\n");
		i++;
	}
	return (str);
} */

t_stack	check_args(char **argv, int argc)
{
	char	**str;
	t_stack	stack;
	int	i;

	i = 0;
	stack = (t_stack){0};
	if (argc == 1 || !ft_valid(argc, argv))
	{
		stack_clear(&stack);
		return(stack);
	}
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str)
		{
			stack_clear(&stack);
			break;
		}
	}
	return (stack);
}
