/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:06:06 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 14:18:17 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cost(t_stack *stack_a, t_stack *stack_b)
{
	int	cost_b;
	int	cost_a;

	set_index(stack_a);
	set_index(stack_b);
	while (stack_a)
	{
		cost_b = cost_cost_b(stack_a, stack_b);
		cost_a = cost_cost_a(stack_a);
		if (cost_a > cost_b)
			stack_a->cost = cost_a + cost_b - cost_b;
		else
			stack_a->cost = cost_b + cost_a - cost_a;
		stack_a = stack_a->next;
	}
}

int	cost_cost_a(t_stack *stack_a)
{
	int		cost_a;
	t_stack	*tmp;

	tmp = stack_a;
	cost_a = 0;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		cost_a++;
	}
	if (stack_a->index > ft_lstd_size(stack_a) / 2)
		cost_a = ft_lstd_size(stack_a) - cost_a;
	return (cost_a);
}

int	cost_cost_b(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp;
	int		indexb;
	int		cost_b;

	tmp = stack_b;
	cost_b = 0;
	while (tmp->value != stack_a->target)
		tmp = tmp->next;
	indexb = tmp->index;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		cost_b++;
	}
	if (indexb > ft_lstd_size(stack_b) / 2)
		cost_b = ft_lstd_size(stack_b) - cost_b;
	return (cost_b);
}
