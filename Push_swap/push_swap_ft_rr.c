/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:52:23 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 17:59:09 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(s_info *stack_info, int *stack_a)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_info->top_a)
	{
		tmp = stack_a[i];
		stack_a[i] = stack_a[i + 1];
		stack_a[i + 1] = tmp;
		i++;
	}
}

void	rrb(s_info *stack_info, int *stack_b)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_info->top_b)
	{
		tmp = stack_b[i];
		stack_b[i] = stack_b[i + 1];
		stack_b[i + 1] = tmp;
		i++;
	}
}

void	rrr(s_info *stack_info, int *stack_a, int *stack_b)
{
	rra(stack_info, stack_a);
	rrb(stack_info, stack_b);
}
