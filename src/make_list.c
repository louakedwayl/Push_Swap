/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 00:54:28 by wayl              #+#    #+#             */
/*   Updated: 2024/09/22 18:35:41 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_list_argc3(t_stack **lst, int argc, char **argv)
{
	t_stack	*new;
	int		i;

	i = 2;
	*lst = ft_lstdnew(ft_atoi(argv[1]));
	if (!(*lst))
		return ;
	while (i < argc)
	{
		new = ft_lstdnew(ft_atoi(argv[i]));
		ft_lstd_add_back(*lst, &new);
		if (!new)
		{
			ft_free_entire_lst(lst);
			ft_printf ("Error \n");
			exit (EXIT_FAILURE);
		}
		i++;
	}
}

void	make_list_argc2(t_stack **lst, char **stack)
{
	t_stack	*new;
	int		len_stack;
	int		i;

	len_stack = 0;
	i = 1;
	while (stack[len_stack])
		len_stack++;
	if (len_stack == 0)
		return ;
	*lst = ft_lstdnew(ft_atoi(stack[0]));
	while (stack[i])
	{
		new = ft_lstdnew(ft_atoi(stack[i]));
		if (!new)
		{
			ft_printf ("Error \n");
			ft_free_entire_lst(lst);
			ft_free_split(&stack);
			exit (EXIT_FAILURE);
		}
		ft_lstd_add_back(*lst, &new);
		i++;
	}
}
