/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:01:44 by marvin            #+#    #+#             */
/*   Updated: 2025/02/24 16:01:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int getmax(t_stack *stack)
{
    int max;
    t_node *current;

    current = stack->head;
    max = current->value;
    while (current)
    {
        if (max < current->value)
            max = current->value;
        current = current->next;            
    }
    return (max);
}

int get_bits(int max)
{
    int max_bits;

    max_bits = 0;
    while(max > 0)
    {
        max >>= 1;
        max_bits++;
    }
    return (max_bits);
}

void    radixsort(t_stack *stack_a, t_stack *stack_b)
{
    int max_bits;
    int max;
    int i;

    i = 0;
    max = getmax(stack_a);
    max_bits = get_bits(max);
    while (i < max_bits)
    {
        max = stack_a->lenght;
        while (max > 0)
        {
            if (stack_a->head->rank & (1 << i))
                ft_rotate(stack_a, 'a', 1);
            else
                ft_push(stack_a, stack_b, 'b');
            max--;
        }
        while (stack_b->lenght > 0)
            ft_push(stack_b, stack_a, 'a');
        i++;
    }
}

