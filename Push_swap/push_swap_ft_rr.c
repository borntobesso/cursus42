/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:52:23 by sojung            #+#    #+#             */
/*   Updated: 2022/01/06 14:44:14 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_info *stack_info)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_info->top_a)
	{
		tmp = stack_info->stack_a[i];
		stack_info->stack_a[i] = stack_info->stack_a[i + 1];
		stack_info->stack_a[i + 1] = tmp;
		i++;
	}
}

void	rrb(t_info *stack_info)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_info->top_b)
	{
		tmp = stack_info->stack_b[i];
		stack_info->stack_b[i] = stack_info->stack_b[i + 1];
		stack_info->stack_b[i + 1] = tmp;
		i++;
	}
}

void	rrr(t_info *stack_info)
{
	rra(stack_info);
	rrb(stack_info);
}
