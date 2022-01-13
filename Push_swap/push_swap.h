/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:39:44 by sojung            #+#    #+#             */
/*   Updated: 2022/01/13 18:33:02 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_info
{
	int	stack_size;
	int	top_a;
	int	top_b;
	int	*stack_a;
	int	*stack_b;
} t_info;

int			*ft_init_a(int size, char **args);
int			*ft_init_b(int size);
t_info		*ft_init_info(t_info *stack_info, int size, char **args);

int			ft_isdigit(char c);
void		error_case(int i, t_info *stack_info);
int			check_double_arg(int pos, char **argv);
long long int	ft_atoi(const char *s);
void		check_valid_args(int argc, char **argv, t_info *stack_info);

void		is_sorted(t_info *stack_info);
void		print_arr(t_info *stack_info);

int			ft_min_index(int *stack, int size);
int			ft_max_index(int *stack, int size);
void		sort_3(t_info *stack_info);

int			srch_index(int b, t_info *stack_info);
int			srch_pivot(int *stack, int top_index);
void		sort_5(t_info *stack_info);

//
void		pivot_push(t_info *stack_info);
void		sort_big(t_info *stack_info);
//

void		push_all_to_b(t_info *stack_info);
int			count_mov(int top_index, int index);
int			ft_abs(int value);
void		a_to_b(t_info *stack_info, int index, int *count_pb);
int			srch_top(t_info *stack_info, int pivot);
int			srch_bot(t_info *stack_info, int pivot);
void		srch_and_move(t_info *stack_info, int pivot, int *count_pb);
int			pivot_sort(t_info *stack_info, int *count_pb);
int			calcul_mov(t_info *stack_info, int index_b);
int			srch_min_mov(t_info *stack_info, int pivot);
void		two_dir_r(t_info *stack_info, int mov_a, int mov_b);
void		action_pos(t_info *stack_info, int mov_a, int mov_b);
void		action_neg(t_info *stack_info, int mov_a, int mov_b);
void		action_b(t_info *stack_info, int index_b);
void		big_sort(t_info *stack_info);

void		sa(t_info *stack_info);
void		sb(t_info *stack_info);
void		ss(t_info *stack_info);
void		pa(t_info *stack_info);
void		pb(t_info *stack_info);

void		ra(t_info *stack_info);
void		rb(t_info *stack_info);
void		rr(t_info *stack_info);

void		rra(t_info *stack_info);
void		rrb(t_info *stack_info);
void		rrr(t_info *stack_info);

#endif
