/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:33:43 by sojung            #+#    #+#             */
/*   Updated: 2022/01/15 15:31:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_to_b(t_info *stack_info)
{
	while (stack_info->top_a != -1)
		pb(stack_info); 
}

int	count_mov(int top_index, int index)
{
	if (index >= ((top_index + 1) / 2))
		return (top_index - index);
	else // rra or rrb
		return (-1 * (index + 1));
}

int	ft_abs(int value)
{
	if (value < 0)
		return (value * -1);
	else
		return (value);
}

void	a_to_b(t_info *stack_info, int index, int *count_pb)
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
	(*count_pb)++;
//	printf("count_pb = %d\n", *count_pb);
}

int	srch_top(t_info *stack_info, int pivot)
{
	int	i;

	i = stack_info->top_a;
	while (i >= 0)
	{
		if (stack_info->stack_a[i] <= pivot)
			return (i);
		i--;
	}
	return (-1);
}

int	srch_bot(t_info *stack_info, int pivot)
{
	int	i;

	i = 0;
	while (i <= (stack_info->top_a))
	{
		if (stack_info->stack_a[i] <= pivot)
			return (i);
		i++;
	}
	return (-1);
}

void	srch_and_move(t_info *stack_info, int pivot, int *count_pb)
{
	int	top_el;
	int	bot_el;
	int count_top;
	int	count_bot;
	
	while (1)
	{
		top_el = srch_top(stack_info, pivot);
		bot_el = srch_bot(stack_info, pivot);
		if (top_el != -1 && bot_el != -1)
		{
			count_top = count_mov(stack_info->top_a, top_el);
			count_bot = count_mov(stack_info->top_a, bot_el);
			if (ft_abs(count_top) < ft_abs(count_bot))
				a_to_b(stack_info, top_el, count_pb);
			else
				a_to_b(stack_info, bot_el, count_pb);
		}
		else
			break ;
	}
}

int	pivot_sort(t_info *stack_info, int *count_pb)
{
	int	pivot;

	pivot = srch_pivot(stack_info->stack_a, stack_info->top_a);
	srch_and_move(stack_info, pivot, count_pb);
	return (pivot);
}

int	calcul_mov(t_info *stack_info, int index_b)
{
	int index_a;
	int	mov_a;
	int	mov_b;

	index_a = srch_index(stack_info->stack_b[index_b], stack_info);
//	printf("index_a = %d\n", index_a); //
	mov_a = count_mov(stack_info->top_a, index_a);
//	printf("mov_a = %d\n", mov_a);
	mov_b = count_mov(stack_info->top_b, index_b);
//	printf("mov_b = %d\n", mov_b);
	if (mov_a * mov_b < 0)
		return (ft_abs(mov_a) + ft_abs(mov_b));
	else
	{
		if (ft_abs(mov_a) > ft_abs(mov_b))
			return (ft_abs(mov_a));
		else
			return (ft_abs(mov_b));
	}
}

int	srch_min_mov(t_info *stack_info, int pivot) // calculates necessary moves and update the index with minimum moves
{
	int i;
	int	min_index;
	int	min_mov;

	i = stack_info->top_b;
	min_index = i;
	min_mov = 5000;
	while (i >= 0)
	{
		if (stack_info->stack_b[i] > pivot)
		{
			if (calcul_mov(stack_info, i) < min_mov)
			{
				min_mov = calcul_mov(stack_info, i);
			//	printf("min_mov = %d\n", min_mov); //
				min_index = i;
			}
		}
		i--;
	}
//	printf("min_index = %d\n", min_index); //
	return (min_index);
}

void	two_dir_r(t_info *stack_info, int mov_a, int mov_b)
{
	int	i;

	i = 0;
	if (ft_abs(mov_a) > ft_abs(mov_b))
	{
		while (i++ < ft_abs(mov_b))
			rr(stack_info);
		i = 0;
		while (i++ < ft_abs(mov_a) - ft_abs(mov_b))
			ra(stack_info);
	}
	else
	{
		while (i++ < ft_abs(mov_a))
			rr(stack_info);
		i = 0;
		while (i++ < ft_abs(mov_b) - ft_abs(mov_a))
			rb(stack_info);
	}
}

void	action_pos(t_info *stack_info, int mov_a, int mov_b)
{
	int	i;

	i = 0;
	if (mov_a < 0 || mov_b < 0) // two directional rrs
	{
		if (ft_abs(mov_a) > ft_abs(mov_b))
		{	
			while (i++ < ft_abs(mov_b))
				rrr(stack_info);
			i = 0;
			while (i++ < ft_abs(mov_a) - ft_abs(mov_b))
				rra(stack_info);
		}
		else
		{
			while (i++ < ft_abs(mov_a))
				rrr(stack_info);
			i = 0;
			while (i++ < ft_abs(mov_b) - ft_abs(mov_a))
				rrb(stack_info);
		}
	}
	else // two directional rs
		two_dir_r(stack_info, mov_a, mov_b);
	pa(stack_info);
}

void	action_neg(t_info *stack_info, int mov_a, int mov_b)
{
	int	i;

	i = 0;
	while (i++ < ft_abs(mov_a))
	{
		if (mov_a < 0) // rra
			rra(stack_info);
		else
			ra(stack_info);
	}
	i = 0;
	while (i++ < ft_abs(mov_b))
	{
		if (mov_b < 0)
			rrb(stack_info);
		else
			rb(stack_info);
	}
	pa(stack_info);
}

void	only_b(t_info *stack_info, int mov_b)
{
	int	i;

	i = 0;
	while (i < ft_abs(mov_b))
	{
		if (mov_b < 0)
			rrb(stack_info);
		else
			rb(stack_info);
		i++;
	}
	pa(stack_info);
	sa(stack_info);
}

void	action_b(t_info *stack_info, int index_b)
{
	int	index_a;
	int	mov_a;
	int	mov_b;

	index_a = srch_index(stack_info->stack_b[index_b], stack_info);
	mov_a = count_mov(stack_info->top_a, index_a); // pos : ra, neg : rra
	mov_b = count_mov(stack_info->top_b, index_b); // pos : rb, neg : rrb
//	printf("index_a = %d\n", index_a);
	if (stack_info->top_a == 0 && index_a == 0)
		only_b(stack_info, mov_b);
	else if (mov_a * mov_b >= 0) // rr or rrr
		action_pos(stack_info, mov_a, mov_b);
	else
		action_neg(stack_info, mov_a, mov_b);
}

void	rotate_top(t_info *stack_info)
{
	int	min_index;
	int	mov;
	int	i;

	min_index = ft_min_index(stack_info->stack_a, stack_info->top_a + 1);
	mov = count_mov(stack_info->top_a, min_index);
	i = 0;
	while (i < ft_abs(mov))
	{
		if (mov < 0)
			rra(stack_info);
		else
			ra(stack_info);
		i++;
	}
}

void	big_sort(t_info *stack_info)
{
	int	pivot1;
	int	pivot2;
	int	count_pb1;
	int	count_pb2;
	int	 i;
	int	min_index;
	int	min_val;

	count_pb1 = 0;
	count_pb2 = 0;
	pivot1 = pivot_sort(stack_info, &count_pb1);
	pivot2 = pivot_sort(stack_info, &count_pb2);
//	printf("pivot1= %d, pivot2 = %d\n", pivot1, pivot2);
	push_all_to_b(stack_info);// all moved to stack b
//	print_arr(stack_info);
	i = 0;
	while (i++ < stack_info->stack_size - count_pb1 - count_pb2)
		action_b(stack_info, srch_min_mov(stack_info, pivot2));
	rotate_top(stack_info);
//	print_arr(stack_info);
	i = 0;
	while (i++ < count_pb2)
		action_b(stack_info, srch_min_mov(stack_info, pivot1));
	rotate_top(stack_info);
//	print_arr(stack_info);
	i = 0;
	min_index = ft_min_index(stack_info->stack_b, stack_info->top_b + 1);
	min_val = stack_info->stack_b[min_index];
//	printf("min_val = %d\n", min_val);
	while (i++ < count_pb1)
		action_b(stack_info, srch_min_mov(stack_info, min_val));
	rotate_top(stack_info);	
	pa(stack_info); // before this, repeat ra or rra for the minimum comes at the top 
}
