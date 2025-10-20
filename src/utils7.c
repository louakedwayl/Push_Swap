/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:06:15 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 14:49:52 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cost2(t_stack *stack_a, t_stack *stack_b)
{
	int	cost_b;
	int	cost_a;

	set_index(stack_a);
	set_index(stack_b);
	while (stack_b)
	{
		cost_a = cost_cost_a2(stack_a, stack_b);
		cost_b = cost_cost_b2(stack_b);
		if (cost_b > cost_a)
			stack_b->cost = cost_b;
		else
			stack_b->cost = cost_a;
		stack_b = stack_b->next;
	}
}

int	cost_cost_b2(t_stack *stack_b)
{
	t_stack	*tmp;
	int		cost_b;

	cost_b = 0;
	tmp = stack_b;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		cost_b++;
	}
	if (stack_b->index > ft_lstd_size(stack_b) / 2)
		cost_b = ft_lstd_size(stack_b) - stack_b->index;
	return (cost_b);
}

int	cost_cost_a2(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp;
	int		cost_a;
	int		indexa;

	cost_a = 0;
	tmp = stack_a;
	while (tmp->value != stack_b->target)
		tmp = tmp->next;
	indexa = tmp->index;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		cost_a++;
	}
	if (indexa > ft_lstd_size(stack_a) / 2)
		cost_a = ft_lstd_size(stack_a) - indexa;
	return (cost_a);
}
