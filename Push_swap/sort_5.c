/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:34:49 by sojung            #+#    #+#             */
/*   Updated: 2022/01/15 16:49:33 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srch_index(int b, t_info *stack_info) //search for the correct index in the stack A
{
	int	i;

	i = 0;
	if (stack_info->top_a == -1)
		return (0);
	while (i < stack_info->top_a)
	{
		if (b < stack_info->stack_a[i] && b > stack_info->stack_a[i + 1])			
			return (i);
		i++;
	}
	if (b < stack_info->stack_a[i] && b > stack_info->stack_a[0])
		return (i);
	i = 0;
	while (i < stack_info->top_a)
	{
		if (stack_info->stack_a[i] < stack_info->stack_a[i + 1])
			return (i);
		i++;
	}
	return (i);
}

int	srch_pivot(int *stack, int top_index)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < top_index + 1)
	{
		j = 0;
		count = 0;
		while (j < top_index + 1)
		{
			if (stack[i] > stack[j])
				count++;
			j++;
		}
		if (count == (top_index / 2))
			return (stack[i]);
		i++;
	}
	return (stack[0]);
}

void	sort_5(t_info *stack_info)
{
	int	pivot;
	int	i;

	pivot = srch_pivot(stack_info->stack_a, stack_info->top_a);
	i = 0;
	while (i < stack_info->stack_size + 1)
	{
		if (stack_info->stack_a[stack_info->top_a] < pivot)
			pb(stack_info);
		else
			ra(stack_info);
		i++;
	}
	sort_3(stack_info);
	if (stack_info->stack_b[0] > stack_info->stack_b[1])
		sb(stack_info);
	pa(stack_info);
	pa(stack_info);
}