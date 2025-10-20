/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:12:32 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/04 11:58:28 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstdnew(int value)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (!element)
		return (NULL);
	element->value = value;
	element->next = NULL;
	element->prev = NULL;
	return (element);
}

t_stack	*ft_lstd_first(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->prev)
	{
		lst = lst->prev;
	}
	return (lst);
}

t_stack	*ft_lstd_last(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstd_add_back(t_stack *lst, t_stack **new)
{
	if (!new || !*new || !lst)
		return (-1);
	lst = ft_lstd_last(lst);
	lst->next = *new;
	(*new)->prev = lst;
	return (0);
}

void	ft_lstd_add_front(t_stack **lst, t_stack **new)
{
	t_stack	*first;

	if (!new || !*new || !lst || !*lst)
		return ;
	first = ft_lstd_first(*lst);
	first->prev = *new;
	(*new)->next = first;
	(*new)->prev = NULL;
	*lst = *new;
}
