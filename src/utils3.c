/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:59:44 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 13:08:58 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_least(t_stack **stack_a)
{
	t_stack	*tmp;
	int		cost;

	tmp = *stack_a;
	cost = tmp->cost;
	tmp = tmp->next;
	while (tmp)
	{
		if (cost > tmp->cost)
			cost = tmp->cost;
		tmp = tmp->next;
	}
	return (cost);
}

t_stack	*which_cost_least(t_stack **stack_a)
{
	t_stack	*retval;
	t_stack	*tmp;
	int		cost;

	tmp = *stack_a;
	cost = tmp->cost;
	retval = tmp;
	tmp = tmp->next;
	while (tmp)
	{
		if (cost > tmp->cost)
		{
			retval = tmp;
			cost = tmp->cost;
		}
		tmp = tmp->next;
	}
	return (retval);
}

void	push_two(t_stack **stack_a, t_stack **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
}

void	set_target2(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a)
		return ;
	while (stack_b)
	{
		if (stack_b->value > which_is_bigger(&stack_a))
		{
			stack_b->pt_target = which_is_pt_least(&stack_a);
			stack_b->target = which_is_least(&stack_a);
		}
		else
		{
			stack_b->target = which_is_bigger_near(stack_b->value, stack_a);
			stack_b->pt_target = which_is_bigger_pt_near
				(stack_b->value, stack_a);
		}
		stack_b = stack_b->next;
	}
}

void	set_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}
