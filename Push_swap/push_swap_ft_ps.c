/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_ps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:38:31 by sojung            #+#    #+#             */
/*   Updated: 2022/01/06 15:01:00 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_info *stack_info)
{
	int	tmp;
	int	i;
	
	i = stack_info->top_a;
	if (i > 0)
	{
		tmp = stack_info->stack_a[i];
		stack_info->stack_a[i] = stack_info->stack_a[i - 1];
		stack_info->stack_a[i - 1] = tmp;
	}
}

void	sb(t_info *stack_info, int *stack_b)
{
	int	tmp;
	int	i;

	i = stack_info->top_b;
	if (i > 0)
	{
		tmp = stack_info->stack_b[i];
		stack_info->stack_b[i] = stack_info->stack_b[i - 1];
		stack_info->stack_b[i - 1] = tmp;
	}
}

void	ss(t_info *stack_info)
{
	sa(stack_info);
	sb(stack_info);
}

void	pa(t_info *stack_info)
{
	int	tmp;
	int	ib;
	int	ia;

	ib = stack_info->top_b;
	ia = stack_info->top_a;
	if (ib != -1)
	{
		tmp = stack_info->stack_b[ib];
		stack_info->stack_a[ia + 1] = tmp;
		stack_info->stack_b[ib] = 0;
		ia += 1;
		ib -= 1;
	}
}

void	pb(t_info *stack_info)
{
	int	tmp;
	int	ia;
	int	ib;

	ia = stack_info->top_a;
	ib = stack_info->top_b;
	if (ia != -1)
	{
		tmp = stack_info->stack_a[ia];
		stack_info->stack_b[ib + 1] = tmp;
		stack_info->stack_a[ia] = 0;
		ib += 1;
		ia -= 1;
	}
}
