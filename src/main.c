/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:18:28 by wlouaked          #+#    #+#             */
/*   Updated: 2024/10/04 17:39:17 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**tmp_stack;

	if (argc == 1)
		exit (1);
	check_argv_no_input(argv);
	ft_init(&stack_a, &stack_b, &tmp_stack);
	ft_check_argc1(argc);
	if (argc == 2)
		handle_argc2(argv, &stack_a, &tmp_stack);
	if (argc >= 3)
		handle_argc3(argc, argv, &stack_a, &tmp_stack);
	check_sort_list(stack_a);
	sort(&stack_a, &stack_b);
	free_both_lists(&stack_a, &stack_b);
	return (0);
}
