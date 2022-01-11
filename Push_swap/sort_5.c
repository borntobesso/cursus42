/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:34:49 by sojung            #+#    #+#             */
/*   Updated: 2022/01/11 13:03:20 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srch_pivot(t_info *stack_info)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < stack_info->top_a + 1)
	{
		j = 0;
		count = 0;
		while (j < stack_info->top_a + 1)
		{
			if (stack_info->stack_a[i] > stack_info->stack_a[j])
				count++;
			j++;
		}
		if (count == (stack_info->top_a / 2))
			return (stack_info->stack_a[i]);
		i++;
	}
	return (stack_info->stack_a[0]);
}

void	sort_5(t_info *stack_info)
{
	int	pivot;
	int	i;

	pivot = srch_pivot(stack_info);
	i = 0;
	while (i < stack_info->top_a + 1)
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
