/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:43:32 by sojung            #+#    #+#             */
/*   Updated: 2022/01/06 14:42:33 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_info *stack_info)
{
	int	i;
	int	tmp;

	i = stack_info->top_a;
	while (i > 0)
	{
		tmp = stack_info->stack_a[i];
		stack_info->stack_a[i] = stack_info->stack_a[i - 1];
		stack_info->stack_a[i - 1] = tmp;
		i--;
	}
}

void	rb(t_info *stack_info)
{
	int	i;
	int	tmp;

	i = stack_info->top_b;
	while (i > 0)
	{
		tmp = stack_info->stack_b[i];
		stack_info->stack_b[i] = stack_info->stack_b[i - 1];
		stack_info->stack_b[i - 1] = tmp;
		i--;
	}

}

void	rr(t_info *stack_info)
{
	ra(stack_info);
	rb(stack_info);
}
