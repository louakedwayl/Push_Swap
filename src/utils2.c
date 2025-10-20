/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 00:10:36 by wayl              #+#    #+#             */
/*   Updated: 2024/10/04 11:57:34 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*which_is_pt_least(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*retval;
	int		value;

	tmp = *stack_a;
	retval = tmp;
	value = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (value > tmp->value)
		{
			value = tmp->value;
			retval = tmp;
		}
		tmp = tmp->next;
	}
	return (retval);
}

int	where_is_value(t_stack *stack, int value)
{
	int		i;
	int		stack_size;

	i = 0;
	stack_size = ft_lstd_size(stack);
	while (stack)
	{
		if (stack->value == value)
			break ;
		stack = stack->next;
		i++;
	}
	if (i < stack_size / 2)
		return (1);
	else if (i >= stack_size / 2)
		return (0);
	return (0);
}

void	test_sort(t_stack **lst, t_stack **lst2)
{
	t_stack	*begin;

	begin = *lst;
	while ((*lst)->next)
	{
		if ((*lst)->value > (*lst)->next->value)
		{
			*lst = begin;
			return ;
		}
		*lst = (*lst)->next;
	}
	*lst = begin;
	ft_printf_lst(*lst);
	ft_printf ("OK\n");
	free_both_lists(lst, lst2);
	exit (0);
}

int	which_is_bigger(t_stack **stack_a)
{
	t_stack	*tmp;
	int		value;

	tmp = *stack_a;
	value = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (value < tmp->value)
			value = tmp->value;
		tmp = tmp->next;
	}
	return (value);
}
