/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:32:53 by sojung            #+#    #+#             */
/*   Updated: 2022/01/06 17:58:11 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	error_case(int i, t_info *stack_info) // i = 1 : error message, 0 : free stacks
{
	if (i == 1)
		write(2, "Error\n", 6);
	else if (i == 0)
	{
		free(stack_info->stack_a);
		free(stack_info->stack_b);
	}
	exit (0);
}

int	check_double_arg(int pos, char **argv)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[pos]))
			return (1);
		i++;
	}
	return (0);
}

long long int	ft_atoi(const char *s)
{
	long long int	sign;
	long long int	res;

	sign = 1;
	res = 0;
	while ((*s >= '\t' && *s <= '\r') || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
	return (sign * res);
}

void	check_valid_args(int argc, char **argv, t_info *stack_info) // double, digit, int_max/int_min, NULL argument
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		if (argv == NULL || argv[i] == NULL)
			error_case(1, stack_info);
		j = 0;
		if (argv[i][0] == '+' || argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
				error_case(1, stack_info);
			j++;
		}
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN || \
			(check_double_arg(i, argv) == 1))
			error_case(1, stack_info);
		i++;
	}
}
