/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_function2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:38:41 by wayl              #+#    #+#             */
/*   Updated: 2024/09/21 22:00:42 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_argc1(int argc)
{
	if (argc == 1)
	{
		exit(EXIT_FAILURE);
	}
}

void	ft_check_null(char **argv)
{
	if (ft_strncmp(argv[1], "", 1) == 0)
	{
		ft_error();
		exit(EXIT_FAILURE);
	}
}

int	check_similar(t_stack	*lst)
{
	int		lst_value;
	t_stack	*tmp;

	while (lst)
	{
		lst_value = lst->value;
		tmp = lst;
		while (lst->next)
		{
			lst = lst->next;
			if (lst->value == lst_value)
				return (-1);
		}
		lst = tmp;
		lst = lst->next;
	}
	return (0);
}
