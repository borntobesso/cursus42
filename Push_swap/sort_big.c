/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:30:05 by sojung            #+#    #+#             */
/*   Updated: 2022/01/11 22:10:07 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	*dup_a(t_info *stack_info) // duplicates stack A with the min at the top
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

int	srch_lis(int *dup, int n, int* max_ref)
{
	int	i;
	int	max_end;
	int	res;

	if (n == 1)
		return 1;
	max_end = 1;
	res = 1;
	i = 1;
	while (i < n)
	{
		res = srch_lis(dup, i, max_ref);
		if (dup[i - 1] < dup[n - 1] && res + 1 > max_end)
			max_end = res + 1;
	}
	if (*max_ref < max_end)
		*max_ref = max_end;
	return (max_end);
}

int	strt_lis(int *dup, int n)
{
	int max;

	max = 1;
	srch_lis(dup, n, &max);
	return (max);
}

void	push_no_lis(t_info *stack_info)
{
	int	*dup;
	int	lis_max_value;
	int	i;

	dup = dup_a(stack_info);
	lis_max_value = dup[strt_lis(dup, stack_info->stack_size) - 1];
	i = stack_info->top_a;
	while (i >= 0)
	{
		if (stack_info->stack_a[i] > lis_max
	}
}
*/
void	pivot_push(t_info *stack_info)
{
	int	pivot;
	int	i;

	if (stack_info->top_a == 0)
		return ;
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
	pivot_push(stack_info);
}

void	
