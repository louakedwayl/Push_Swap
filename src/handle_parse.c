/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:17:53 by wlouaked          #+#    #+#             */
/*   Updated: 2024/09/21 22:06:32 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_argc2(char **argv, t_stack **stack_a, char ***tmp_stack)
{
	ft_check_null(argv);
	*tmp_stack = ft_split (argv[1], ' ');
	check_valid_argc2(*tmp_stack);
	make_list_argc2(stack_a, *tmp_stack);
	handle_similar(*stack_a, *tmp_stack);
	if (!(*tmp_stack)[1])
	{
		ft_free_entire_lst(stack_a);
		ft_free_split(tmp_stack);
		exit (0);
	}
	ft_free_split(tmp_stack);
}

void	handle_argc3(int argc, char **argv,
	t_stack **stack_a, char ***tmp_stack)
{
	check_valid_argc3(argc, argv);
	make_list_argc3(stack_a, argc, argv);
	handle_similar(*stack_a, *tmp_stack);
	ft_free_split(tmp_stack);
}
