/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:42:47 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/22 18:31:05 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack	*lst, t_stack *lst2)
{
	sa(lst);
	sb(lst2);
}

void	sa(t_stack	*lst)
{
	int	tmp;

	if (!lst)
		return ;
	lst = ft_lstd_first(lst);
	if (!lst->next)
		return ;
	tmp = lst->next->value;
	lst->next->value = lst->value;
	lst->value = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack	*lst)
{
	int	tmp;

	if (!lst)
		return ;
	lst = ft_lstd_first(lst);
	if (!lst->next)
		return ;
	tmp = lst->next->value;
	lst->next->value = lst->value;
	lst->value = tmp;
	ft_printf("sb\n");
}
