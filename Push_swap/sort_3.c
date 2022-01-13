/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:01:06 by sojung            #+#    #+#             */
/*   Updated: 2022/01/13 14:39:10 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_index(int *stack, int size)
{
	int	min_index;
	int	i;

	i = 0;
	min_index = 0;
	while (i < size)
	{
		if (stack[min_index] > stack[i])
			min_index = i;
		i++;
	}
	return (min_index);
}

int	ft_max_index(int *stack, int size)
{
	int	max_index;
	int	i;

	i = 0;
	max_index = 0;
	while (i < size)
	{
		if (stack[max_index] < stack[i])
			max_index = i;
		i++;
	}
	return (max_index);
}

void	sort_3(t_info *stack_info)
{
	int	*a;

	a = stack_info->stack_a;
	if (a[0] > a[1] && a[1] > a[2])
		return ;
	if (ft_max_index(a, 3) == 0 || ft_min_index(a, 3) == 2 || \
		((ft_min_index(a, 3) == 0) && (ft_max_index(a, 3) == 2)))
		sa(stack_info);
	if ((ft_max_index(a, 3) == 2) && (ft_min_index(a, 3) == 1))
		ra(stack_info);
	if ((ft_max_index(a, 3) == 1) && (ft_min_index(a, 3) == 0))
		rra(stack_info);
}
