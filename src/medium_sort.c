/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:38:12 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/30 21:17:24 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_is_least(t_stack **stack_a)
{
	t_stack	*tmp;
	int		value;

	tmp = *stack_a;
	value = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (value > tmp->value)
			value = tmp->value;
		tmp = tmp->next;
	}
	return (value);
}

int	which_is_second_least(t_stack **stack_a)
{
	t_stack	*tmp;
	int		min_value;
	int		retval;

	tmp = *stack_a;
	min_value = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (min_value > tmp->value)
			min_value = tmp->value;
		tmp = tmp->next;
	}
	tmp = *stack_a;
	retval = tmp->value;
	while (tmp)
	{
		if (retval > tmp->value && tmp->value > min_value)
			retval = tmp->value;
		tmp = tmp->next;
	}
	return (retval);
}

int	which_is_third_least(t_stack **stack_a, int second_least)
{
	t_stack	*tmp;
	int		retval;

	tmp = *stack_a;
	retval = tmp->value;
	while (tmp)
	{
		if (retval > tmp->value && tmp->value > second_least)
			retval = tmp->value;
		tmp = tmp->next;
	}
	return (retval);
}

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int		min;

	min = which_is_least(stack_a);
	while ((*stack_a)->value != min)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int		min;
	int		second;

	min = which_is_least(stack_a);
	second = which_is_second_least(stack_a);
	while ((*stack_a)->value != min && (*stack_a)->value != second)
	{
		rra(stack_a);
	}
	pb(stack_a, stack_b);
	min = which_is_least(stack_a);
	while ((*stack_a)->value != min && (*stack_a)->value != second)
	{
		rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	if ((*stack_b)->value < (*stack_b)->next->value)
		sb(*stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
