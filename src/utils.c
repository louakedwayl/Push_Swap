/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:23:05 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/22 18:28:43 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_stack **stack_a, t_stack **stack_b, char ***tmp_stack)
{
	*tmp_stack = NULL;
	*stack_a = NULL;
	*stack_b = NULL;
}

void	ft_error(void)
{
	ft_putendl_fd("Error", 2);
}

void	ft_printf_lst(t_stack	*lst)
{
	int	i;

	i = 0;
	if (!lst)
		ft_printf("Lst is empty.\n");
	while (lst)
	{
		ft_printf("Node %d = %d\n", i, lst->value);
		lst = lst->next;
		i++;
	}
}

void	ft_printf_reverse_lst(t_stack	*lst)
{
	int	i;

	if (!lst)
	{
		ft_printf ("lst is empty.\n");
		return ;
	}
	i = (ft_lstd_size(lst) - 1);
	while (lst->next)
		lst = lst->next;
	while (lst)
	{
		ft_printf ("Node %d = %d\n", i, lst->value);
		lst = lst->prev;
		i--;
	}
}

int	ft_lstd_size(t_stack *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst->prev)
	{
		lst = lst->prev;
	}
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
