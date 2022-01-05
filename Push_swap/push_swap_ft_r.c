/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:43:32 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 17:52:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(s_info *stack_info, int *stack_a)
{
	int	i;
	int	tmp;

	i = stack_info->top_a;
	while (i > 0)
	{
		tmp = stack_a[i];
		stack_a[i] = stack_a[i - 1];
		stack_a[i - 1] = tmp;
		i--;
	}
}

void	rb(s_info *stack_info, int *stack_b)
{
	int	i;
	int	tmp;

	i = stack_info->top_b;
	while (i > 0)
	{
		tmp = stack_b[i];
		stack_b[i] = stack_b[i - 1];
		stack_b[i - 1] = tmp;
		i--;
	}

}

void	rr(s_info *stack_info, int *stack_a, int *stack_b)
{
	ra(stack_info, stack_a);
	rb(stack_info, stack_b);
}
