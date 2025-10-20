/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wayl <wayl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 02:22:51 by wayl              #+#    #+#             */
/*   Updated: 2024/09/25 17:10:58 by wayl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_int(const char *str)
{
	int			i;
	long long	val;
	int			is_neg;

	i = 0;
	is_neg = 1;
	val = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - '0');
		if (val * is_neg > 2147483647 || val * is_neg < -2147483648)
			return (-1);
				i++;
	}
	return (0);
}

//un seul arg
int	ft_is_valid_argc2(char **stack)
{
	int	i;
	int	j;
	int	len_stack;

	i = 0;
	j = 0;
	len_stack = 0;
	while (stack[len_stack])
		len_stack++;
	while (i < len_stack)
	{
		if (ft_is_int(stack[i]) == -1)
			return (-1);
		while (stack[i][j])
		{
			if (stack[i][j] == '-' || stack[i][j] == '+')
				j++;
			if (ft_isdigit(stack[i][j]) == 0)
				return (-1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

//plusieurs arg
int	ft_is_valid_argc3(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_is_int(argv[i]) == -1)
			return (-1);
		if (argv[i][0] == '\0')
			return (-1);
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (-1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
