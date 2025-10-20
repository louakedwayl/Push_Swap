/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:10:13 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/02 13:13:31 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_argv_no_input(char **argv)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			flag = 1;
		i++;
	}
	if (flag == 0)
		exit (0);
}

t_stack	*which_is_pt_bigger(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*retval;
	int		value;

	if (!stack_a || !*stack_a)
		return (NULL);
	tmp = *stack_a;
	value = tmp->value;
	retval = tmp;
	tmp = tmp->next;
	while (tmp)
	{
		if (value < tmp->value)
		{
			value = tmp->value;
			retval = tmp;
		}
		tmp = tmp->next;
	}
	return (retval);
}

int	which_is_near(int value, t_stack *stack)
{
	int	nbr_most_near;
	int	result;

	while (stack && stack->value >= value)
		stack = stack->next;
	nbr_most_near = stack->value;
	result = value - stack->value;
	while (stack)
	{
		if (value - stack->value < result && value - stack->value > 0)
		{
			result = value - stack->value;
			nbr_most_near = stack->value;
		}
		stack = stack->next;
	}
	return (nbr_most_near);
}

int	which_is_bigger_near(int value, t_stack *stack)
{
	int	nbr_most_near;
	int	result;

	while (stack && stack->value <= value)
		stack = stack->next;
	nbr_most_near = stack->value;
	result = stack->value - value;
	while (stack)
	{
		if ((stack->value > value) && (stack->value - value) < result)
		{
			result = stack->value - value;
			nbr_most_near = stack->value;
		}
		stack = stack->next;
	}
	return (nbr_most_near);
}

t_stack	*which_is_bigger_pt_near(int value, t_stack *stack)
{
	t_stack	*retval;
	int		nbr_most_near;
	int		result;

	while (stack && stack->value <= value)
		stack = stack->next;
	retval = stack;
	nbr_most_near = stack->value;
	result = stack->value - value;
	while (stack)
	{
		if (stack->value > value && stack->value - value < result)
		{
			result = stack->value - value;
			nbr_most_near = stack->value;
			retval = stack;
		}
		stack = stack->next;
	}
	return (retval);
}
