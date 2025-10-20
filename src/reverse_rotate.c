/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:40:53 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/30 21:18:26 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra_2(stack_a);
	rrb_2(stack_b);
	ft_printf("rrr\n");
}

void	rra(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	last_node->prev->next = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	last_node->prev = NULL;
	*stack = last_node;
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	last_node->prev->next = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	last_node->prev = NULL;
	*stack = last_node;
	ft_printf("rrb\n");
}

void	rra_2(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	last_node->prev->next = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	last_node->prev = NULL;
	*stack = last_node;
}

void	rrb_2(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	last_node->prev->next = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	last_node->prev = NULL;
	*stack = last_node;
}
