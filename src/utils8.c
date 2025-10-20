/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:43:10 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 14:54:06 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack **stack_a,
	t_stack **stack_b, t_stack *cheap_node, t_stack *target)
{
	while (cheap_node->index != 0 && target->index != 0)
	{
		if (cheap_node->index <= (ft_lstd_size(*stack_a) / 2)
			&& target->index <= (ft_lstd_size(*stack_b) / 2))
			rr(stack_a, stack_b);
		else if (cheap_node->index > (ft_lstd_size(*stack_a) / 2)
			&& target->index > (ft_lstd_size(*stack_b) / 2))
			rrr(stack_a, stack_b);
		else if (cheap_node->index <= (ft_lstd_size(*stack_a) / 2)
			&& target->index > (ft_lstd_size(*stack_b) / 2))
			ra(stack_a);
		else if (cheap_node->index > (ft_lstd_size(*stack_a) / 2)
			&& target->index <= (ft_lstd_size(*stack_b) / 2))
			rra(stack_a);
		set_index(*stack_a);
		set_index(*stack_b);
	}
}

void	rotate_a(t_stack **stack_a, t_stack **stack_b, t_stack	*cheap_node)
{
	while (cheap_node->index != 0)
	{
		if (cheap_node->index <= (ft_lstd_size(*stack_b) / 2))
			ra(stack_a);
		if (cheap_node->index > (ft_lstd_size(*stack_b) / 2))
			rra(stack_a);
		set_index(*stack_a);
	}
}

void	push_toward_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap_node;
	t_stack	*target;

	while (ft_lstd_size(*stack_a) > 3)
	{
		set_target(*stack_a, *stack_b);
		set_cost(*stack_a, *stack_b);
		set_index(*stack_a);
		set_index(*stack_b);
		cheap_node = which_cost_least(stack_a);
		target = cheap_node->pt_target;
		rotate_both(stack_a, stack_b, cheap_node, target);
		rotate_a(stack_a, stack_b, cheap_node);
		while (target->index != 0)
		{
			if (target->index <= (ft_lstd_size(*stack_b) / 2))
				rb(stack_b);
			if (target->index > (ft_lstd_size(*stack_b) / 2))
				rrb(stack_b);
			set_index(*stack_b);
		}
		pb(stack_a, stack_b);
	}
}

void	sort_six(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap_node;

	push_two(stack_a, stack_b);
	push_toward_b(stack_a, stack_b);
	sort_three(stack_a);
	push_toward_a(stack_a, stack_b);
	cheap_node = which_is_pt_least(stack_a);
	while (*stack_a != cheap_node)
	{
		if (cheap_node->index <= ft_lstd_size(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
}
