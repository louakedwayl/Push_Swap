/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:36:44 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/23 18:00:56 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
	{
		sa(*stack_a);
	}
}

void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(*stack_a);
	if ((*stack_a)->next->value > (*stack_a)->next->next->value)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(*stack_a);
}
