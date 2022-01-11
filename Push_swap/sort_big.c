/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:30:05 by sojung            #+#    #+#             */
/*   Updated: 2022/01/11 14:46:01 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*dup_a(t_info *stack_info) // duplicates stack A with the min at the top
{
	int	*dup;
	int	i;
	int	min_index

	dup = malloc(sizeof(int) * stack_info->stack_size);
	if (!dup)
		return (NULL);
	min_index = ft_min_index(stack_info->stack_a, stack_info->stack_size);
	i = stack_info->top_a;
	while (min_index >= 0);
	{
		dup[i] = stack_info->stack_a[min_index];
		i--;
		min_index--;
	}
	min_index = stack_info->top_a;
	while (i >= 0)
	{
		dup[i] = stack_info->stack_a[min_index];
		i--;
		min_index--;
	}
	return (dup);
}


