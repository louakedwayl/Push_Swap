/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:43:08 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 14:55:18 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both2(t_stack **stack_a,
	t_stack **stack_b, t_stack	*cheap_node, t_stack	*target)
{
	while (cheap_node->index != 0 && target->index != 0)
	{
		if (cheap_node->index <= (ft_lstd_size(*stack_b) / 2)
			&& target->index <= (ft_lstd_size(*stack_a) / 2))
			rr(stack_a, stack_b);
		else if (cheap_node->index > (ft_lstd_size(*stack_b) / 2)
			&& target->index > (ft_lstd_size(*stack_a) / 2))
			rrr(stack_a, stack_b);
		else if (cheap_node->index <= (ft_lstd_size(*stack_b) / 2)
			&& target->index > (ft_lstd_size(*stack_a) / 2))
			rb(stack_b);
		else if (cheap_node->index > (ft_lstd_size(*stack_b) / 2)
			&& target->index <= (ft_lstd_size(*stack_a) / 2))
			rrb(stack_b);
		set_index(*stack_a);
		set_index(*stack_b);
	}
}

void	rotate_b(t_stack **stack_a, t_stack **stack_b, t_stack	*cheap_node)
{
	while (cheap_node->index != 0)
	{
		if (cheap_node->index <= (ft_lstd_size(*stack_b) / 2))
			rb(stack_b);
		if (cheap_node->index > (ft_lstd_size(*stack_b) / 2))
			rrb(stack_a);
		set_index(*stack_b);
	}
}

void	push_toward_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap_node;
	t_stack	*target;

	while (ft_lstd_size(*stack_b) > 0)
	{
		set_target2(*stack_a, *stack_b);
		set_cost2(*stack_a, *stack_b);
		set_index(*stack_a);
		set_index(*stack_b);
		cheap_node = which_cost_least(stack_b);
		target = cheap_node->pt_target;
		rotate_both2(stack_a, stack_b, cheap_node, target);
		rotate_b(stack_a, stack_b, cheap_node);
		while (target->index != 0)
		{
			if (target->index <= (ft_lstd_size(*stack_a) / 2))
				ra(stack_a);
			else if (target->index > (ft_lstd_size(*stack_a) / 2))
				rra(stack_a);
			set_index(*stack_a);
		}
		pa(stack_a, stack_b);
	}
}
