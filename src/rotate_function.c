/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 02:59:21 by wayl              #+#    #+#             */
/*   Updated: 2024/10/01 18:41:57 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra_2(stack_a);
	rb_2(stack_b);
	ft_printf ("rr\n");
}

void	ra(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	*stack = first_node->next;
	(*stack)->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
	ft_printf ("ra\n");
}

void	rb(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	*stack = first_node->next;
	(*stack)->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
	ft_printf ("rb\n");
}

void	ra_2(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	*stack = first_node->next;
	(*stack)->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
}

void	rb_2(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = ft_lstd_first(*stack);
	last_node = ft_lstd_last(*stack);
	*stack = first_node->next;
	(*stack)->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
}
