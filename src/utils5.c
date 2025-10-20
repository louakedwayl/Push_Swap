/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:14:16 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 13:24:21 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*which_is_pt_near(int value, t_stack *stack)
{
	t_stack	*retval;
	int		nbr_most_near;
	int		result;

	while (stack && stack->value >= value)
		stack = stack->next;
	retval = stack;
	nbr_most_near = stack->value;
	result = value - stack->value;
	while (stack)
	{
		if (value - stack->value < result && value - stack->value > 0)
		{
			result = value - stack->value;
			nbr_most_near = stack->value;
			retval = stack;
		}
		stack = stack->next;
	}
	return (retval);
}

void	set_target(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_b)
		return ;
	while (stack_a)
	{
		if (stack_a->value < which_is_least(&stack_b))
		{
			stack_a->pt_target = which_is_pt_bigger(&stack_b);
			stack_a->target = which_is_bigger(&stack_b);
		}
		else
		{
			stack_a->target = which_is_near(stack_a->value, stack_b);
			stack_a->pt_target = which_is_pt_near(stack_a->value, stack_b);
		}
		stack_a = stack_a->next;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstd_size(*stack_a) == 2)
		sort_two(stack_a);
	if (ft_lstd_size(*stack_a) == 3)
		sort_three(stack_a);
	if (ft_lstd_size(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	if (ft_lstd_size(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	if (ft_lstd_size(*stack_a) >= 6)
		sort_six(stack_a, stack_b);
}
