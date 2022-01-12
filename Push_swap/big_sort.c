/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:33:43 by sojung            #+#    #+#             */
/*   Updated: 2022/01/12 18:57:49 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_mov(t_info *stack_info, int index)
{
	if (index >= ((stack_info->top_a + 1) / 2)) // ra
		return (stack_info->top_a - index);
	else // rra
		return (index + 1);
}

int	count_mov_b(t_info *stack_info, int index)
{

}

void	a_to_b(t_info *stack_info, int index)
{
	int	i;

	i = 0;
	if (index >= (stack_info->top_a + 1) / 2)
		while (i++ < stack_info->top_a - index)
			ra(stack_info);
	else
		while (i++ < index + 1)
			rra(stack_info);
	pb(stack_info);
}

int	srch_elem_top(t_info *stack_info, int pivot)
{
	int	i;

	i = stack_info->top_a;
	while (i >= 0)
	{
		if (stack_info->stack_a[i] < pivot)
			return (i);
		i--;
	}
	return (-1);
}

int	srch_elem_bot(t_info *stack_info, int pivot)
{
	int	i;

	i = 0;
	while (i < (stack_info->top_a))
	{
		if (stack_info->stack_a[i] < pivot)
			return (i);
		i++;
	}
	return (-1);
}

void	srch_and_move(t_info *stack_info, int pivot)
{
	int	top_elem;
	int	bot_elem;
	
	while (1)
	{
		top_elem = srch_elem_top(stack_info, pivot);
		bot_elem = srch_elem_bot(stack_info, pivot);
		if (top_elem != -1 && bot_elem != -1)
		{
			if (count_mov(stack_info, top_elem) < count_mov(stack_info, bot_elem))
				a_to_b(stack_info, top_elem);
			else
				a_to_b(stack_info, bot_elem);
		}
		else
			break ;
	}
}



void	big_sort(t_info *stack_info)
{
	int	pivot1;
	int	pivot2;

	pivot1 = srch_pivot80(stack_info->stack_a, stack_info->top_a);
	srch_and_move(stack_info, pivot1);
	pivot2 = srch_pivot80(stack_info->stack_a, stack_info->top_a);
	srch_and_move(stack_info, pivot2); // move bigger elements than pivot to stack B
	while (stack_info->top_a != -1)
		pb(stack_info);
	// pivot = srch_pivot80(stack_info->stack_b, stack_info->top_b); //use pivot1!
	
}
