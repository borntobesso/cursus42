/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:31:01 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 17:31:06 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_a(int size, char **args)
{
	int	*stack_a;
	int	i;

	stack_a = malloc(sizeof(int) * size);
	if (!stack_a)
		return (NULL);
	i = 0;
	while (i < size)
	{
		stack_a[size - 1 - i] = (int)ft_atoi(args[i]);
		i++;
	}
	return (stack_a);
}

int	*ft_init_b(int size)
{
	int	*stack_b;
	int	i;

	stack_b = malloc(sizeof(int) * size)
	if (!stack_b)
		return (NULL);
	i = 0;
	while (i < size)
	{
		stack_b[i] = 0;
		i++;
	}
	return (stack_b);
}

s_info	*ft_init_info(int size)
{
	s_info	*stack_info;

	stack_info = malloc(sizeof(s_info));
	if (!stack_info)
		return (NULL);
	stack_info->stack_size = size;
	stack_info->top_index_a = size - 1;
	stack_info->top_index_b = -1;
	return (stack_info);
}