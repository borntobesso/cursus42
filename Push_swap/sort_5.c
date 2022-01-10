/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:42:44 by sojung            #+#    #+#             */
/*   Updated: 2022/01/10 17:00:17 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srch_index(int b, t_info *stack_info)
{
	int	i;
	int	*a;

	a = stack_info->stack_a;
	i = stack_info->top_a;
	while (i >= 0)
	{
		if (b < a[i])
			return (i + 1);
		i--;
	}
	return (i + 1);
}

void	rra_pa_ra_ra(t_info *stack_info)
{
	rra(stack_info);
	pa(stack_info);
	ra(stack_info);
	ra(stack_info);
}

void	insert_5_1(t_info *stack_info, int i)
{
	if (i == 0)
	{
		pa(stack_info);
		ra(stack_info);
	}
	else if (i == 1)
		rra_pa_ra_ra(stack_info);
	else if (i == 2)
	{
		ra(stack_info);
		pa(stack_info);
		rra(stack_info);
	}
	else
		pa(stack_info);
}

void	insert_5_2(t_info *stack_info, int i)
{
	if (i == 0)
	{
		pa(stack_info);
		ra(stack_info);
	}
	else if (i == 1)
		rra_pa_ra_ra(stack_info);
	else if (i == 2)
	{
		ra(stack_info);
		ra(stack_info);
		pa(stack_info);
		rra(stack_info);
		rra(stack_info);
	}
	else if (i == 3)
	{
		ra(stack_info);
		pa(stack_info);
		rra(stack_info);
	}
	else
		pa(stack_info);
}

void	sort_5(t_info *stack_info)
{
	int	index;

	pb(stack_info);
	pb(stack_info);
	sort_3(stack_info);
	index = srch_index(stack_info->stack_b[1], stack_info);
	insert_5_1(stack_info, index);
	index = srch_index(stack_info->stack_b[0], stack_info);
	insert_5_2(stack_info, index);
}
