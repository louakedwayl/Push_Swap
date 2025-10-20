/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:05:15 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/22 18:26:49 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **s)
{
	if (!s || !*s)
		return ;
	free (*s);
	*s = NULL;
	return ;
}

void	ft_free_lst(t_stack **lst)
{
	if (!lst || !*lst)
		return ;
	free (*lst);
	lst = NULL;
	return ;
}

void	ft_free_split(char ***split)
{
	size_t	i;

	i = 0;
	if (split && *split && **split)
	{
		while (split[0][i])
		{
			ft_free(&split[0][i]);
			i++;
		}
		free(*split);
		*split = NULL;
	}
	return ;
}

void	ft_free_entire_lst(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || !*lst)
		return ;
	while ((*lst)->prev)
		*lst = (*lst)->prev;
	tmp = (*lst)->next;
	while (tmp)
	{
		ft_free_lst(lst);
		*lst = tmp;
		tmp = tmp->next;
	}
	ft_free_lst(lst);
	return ;
}

void	free_both_lists(t_stack **lst, t_stack **lst2)
{
	ft_free_entire_lst(lst);
	ft_free_entire_lst(lst2);
}
