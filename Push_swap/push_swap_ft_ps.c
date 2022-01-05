/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_ps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:38:31 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 17:38:46 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(s_type *stack_info, int *stack_a)
{
	int	tmp;
	
	if (stack_info->top_a > 0)
	{
		tmp = stack_a[stack_info->top_a];
		stack_a[stack_info->top_a] = stack_a[stack_info->top_a - 1];
		stack_a[stack_info->top_a - 1] = tmp;
	}
}

void	sb(s_type *stack_info, int *stack_b)
{
	int	tmp;

	if (stack_info->top_b > 0)
	{
		tmp = stack_b[stack_info->top_b];
		stack_b[stack_info->top_b] = stack_b[stack_info->top_b - 1];
		stack_b[stack_info->top_b - 1] = tmp;
	}
}

void	ss(s_type *stack_info, int *stack_a, int *stack_b)
{
	sa(stack_info, stack_a);
	sb(stack_info, stack_b);
}

void	pa(s_type *stack_info, int *stack_a, int *stack_b)
{
	int	tmp;

	if (stack_info->top_b != -1)
	{
		tmp = stack_b[stack_info->top_b];
		stack_a[stack_info->top_a + 1] = tmp;
		stack_b[stack_info->top_b] = 0;
		stack_info->top_a += 1;
		stack_info->top_b -= 1;
	}
}

void	pb(s_type *stack_info, int *stack_a, int *stack_b)
{
	int	tmp;

	if (stack_info->top_a != -1)
	{
		tmp = stack_a[stack_info->top_a];
		stack_b[stack_info->top_b + 1] = tmp;
		stack_a[stack_info->top_a] = 0;
		stack_info->top_b += 1;
		stack_info->top_a -= 1;
	}

}
