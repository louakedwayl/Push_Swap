/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 00:59:09 by wayl              #+#    #+#             */
/*   Updated: 2024/10/02 14:48:47 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* -------------------------------------------------------------------------- */
/*                                   HEADERS                                  */
/* -------------------------------------------------------------------------- */

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../libft/ft_printf.h"

/* -------------------------------------------------------------------------- */
/*                                  STUCTURES                                 */
/* -------------------------------------------------------------------------- */

typedef struct s_stack
{
	int				value;
	int				target;
	int				cost;
	int				cost_a;
	int				cost_b;
	int				index;

	struct s_stack	*cheap_node;
	struct s_stack	*pt_target;
	struct s_stack	*next;
	struct s_stack	*prev;
}								t_stack;

/* -------------------------------------------------------------------------- */
/*                                 FUNCTIONS                                  */
/* -------------------------------------------------------------------------- */

t_stack	*ft_lstdnew(int value);
t_stack	*ft_lstd_last(t_stack *lst);
int		ft_lstd_add_back(t_stack *lst, t_stack **new);
void	ft_lstd_add_front(t_stack **lst, t_stack **new);
void	ft_free_split(char ***split);
void	ft_free(char **s);
void	ft_free_entire_lst(t_stack **lst);
void	ft_free_lst(t_stack **lst);
int		ft_is_int(const char *str);
void	make_list_argc2(t_stack **lst, char **stack);
void	make_list_argc3(t_stack **lst, int argc, char **argv);
int		ft_is_valid_argc2(char **stack);
int		ft_is_valid_argc3(int argc, char **argv);
void	ft_error(void);
int		check_similar(t_stack *lst);
void	ft_check_argc1(int argc);
void	ft_check_null(char **argv);
void	check_valid_argc2(char **stack);
void	check_valid_argc3(int argc, char **argv);
void	handle_similar(t_stack	*lst, char **stack);
void	ft_printf_lst(t_stack	*lst);
t_stack	*ft_lstd_first(t_stack *lst);
int		ft_lstd_size(t_stack *lst);
void	ft_printf_reverse_lst(t_stack	*lst);
void	sa(t_stack	*lst);
void	pb(t_stack	**stack_a, t_stack	**stack_b);
void	free_both_lists(t_stack **lst, t_stack **lst2);
void	sb(t_stack	*lst);
void	ss(t_stack	*lst, t_stack *lst2);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	rra_2(t_stack **stack);
void	rrb_2(t_stack **stack);
void	ft_init(t_stack **stack_a, t_stack **stack_b, char ***tmp_stack);
void	handle_argc2(char **argv, t_stack **stack_a, char ***tmp_stack);
void	handle_argc3(int argc, char **argv,
			t_stack **stack_a, char ***tmp_stack);
void	check_sort_list(t_stack *lst);
void	sort(t_stack **stack_a, t_stack **stack_b);
int		which_is_least(t_stack **stack_a);
int		which_is_second_least(t_stack **stack_a);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack_a);
void	sort_two(t_stack **stack_a);
int		which_is_third_least(t_stack **stack_a, int second_least);
t_stack	*which_is_bigger_pt_near(int value, t_stack *stack);
int		which_is_bigger_near(int value, t_stack *stack);
t_stack	*which_is_pt_least(t_stack **stack_a);
int		where_is_value(t_stack *stack, int value);
void	test_sort(t_stack **lst, t_stack **lst2);
int		which_is_bigger(t_stack **stack_a);
void	ra_2(t_stack **stack);
void	rb_2(t_stack **stack);
int		cost_least(t_stack **stack_a);
t_stack	*which_cost_least(t_stack **stack_a);
void	push_two(t_stack **stack_a, t_stack **stack_b);
void	set_target2(t_stack *stack_a, t_stack *stack_b);
void	set_index(t_stack *stack);
t_stack	*which_is_pt_near(int value, t_stack *stack);
void	set_target(t_stack *stack_a, t_stack *stack_b);
void	sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*which_is_pt_bigger(t_stack **stack_a);
void	check_argv_no_input(char **argv);
int		which_is_near(int value, t_stack *stack);
int		which_is_bigger_near(int value, t_stack *stack);
t_stack	*which_is_bigger_pt_near(int value, t_stack *stack);
void	sort_six(t_stack **stack_a, t_stack **stack_b);
int		cost_cost_a2(t_stack *stack_a, t_stack *stack_b);
int		cost_cost_b2(t_stack *stack_b);
void	set_cost2(t_stack *stack_a, t_stack *stack_b);
void	set_cost(t_stack *stack_a, t_stack *stack_b);
int		cost_cost_a(t_stack *stack_a);
int		cost_cost_b(t_stack *stack_a, t_stack *stack_b);
void	rotate_both2(t_stack **stack_a,
			t_stack **stack_b, t_stack	*cheap_node, t_stack	*target);
void	rotate_b(t_stack **stack_a, t_stack **stack_b, t_stack	*cheap_node);
void	push_toward_a(t_stack **stack_a, t_stack **stack_b);
void	sort_six(t_stack **stack_a, t_stack **stack_b);
void	push_toward_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a,
			t_stack **stack_b, t_stack	*cheap_node);
void	rotate_both(t_stack **stack_a, t_stack **stack_b,
			t_stack	*cheap_node, t_stack	*target);
#endif

/* -------------------------------------------------------------------------- */
