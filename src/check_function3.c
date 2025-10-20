/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_function3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:45:04 by wayl              #+#    #+#             */
/*   Updated: 2024/10/04 11:58:47 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_valid_argc2(char **stack)
{
	if (ft_is_valid_argc2(stack) == -1)
	{
		ft_error();
		ft_free_split(&stack);
		exit(EXIT_FAILURE);
	}
}

void	handle_similar(t_stack	*lst, char **stack)
{
	if (check_similar(lst) == -1)
	{
		ft_free_split(&stack);
		ft_free_entire_lst(&lst);
		ft_error();
		exit(EXIT_FAILURE);
	}
}

void	check_valid_argc3(int argc, char **argv)
{
	if (ft_is_valid_argc3(argc, argv) == -1)
	{
		ft_error();
		exit(EXIT_FAILURE);
	}
}

void	check_sort_list(t_stack *lst)
{
	while (lst->next)
	{
		if (lst->value > lst->next->value)
			return ;
		lst = lst->next;
	}
	ft_free_entire_lst(&lst);
	exit(0);
}
