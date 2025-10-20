/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:41:05 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/22 18:33:51 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stack_a || !*stack_a)
		return ;
	while ((*stack_a)->prev)
		*stack_a = (*stack_a)->prev;
	new = ft_lstdnew((*stack_a)->value);
	if (!new)
	{
		free_both_lists(stack_a, stack_b);
		exit(1);
	}
	if (*stack_b)
		ft_lstd_add_front(stack_b, &new);
	else
		*stack_b = new;
	tmp = (*stack_a)->next;
	if (tmp)
		tmp->prev = NULL;
	(*stack_a)->next = NULL;
	ft_free_lst(stack_a);
	*stack_a = tmp;
	ft_printf("pb\n");
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stack_b || !*stack_b)
		return ;
	while ((*stack_b)->prev)
		*stack_b = (*stack_b)->prev;
	new = ft_lstdnew((*stack_b)->value);
	if (!new)
	{
		free_both_lists(stack_a, stack_b);
		exit(1);
	}
	if (*stack_a)
		ft_lstd_add_front(stack_a, &new);
	else
		*stack_a = new;
	tmp = (*stack_b)->next;
	if (tmp)
		tmp->prev = NULL;
	(*stack_b)->next = NULL;
	ft_free_lst(stack_b);
	*stack_b = tmp;
	ft_printf("pa\n");
}
