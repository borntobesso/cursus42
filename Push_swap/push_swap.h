/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:39:44 by sojung            #+#    #+#             */
/*   Updated: 2022/01/16 17:50:11 by sojung           ###   ########.fr       */
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

/***	initializing functions (ft_init.c)	***/
int				*ft_init_a(int size, char **args);
int				*ft_init_b(int size);
t_info			*ft_init_info(t_info *stack_info, int size, char **args);

/***	arguments verifying functions (arg_utils.c)	***/
int				ft_isdigit(char c);
int				check_double_arg(int pos, char **argv);
long long int	ft_atoi(const char *s);
void			check_valid_args(int argc, char **argv, t_info *stack_info);

/***	main (push_swap.c) 	***/
void			error_case(int i, t_info *stack_info);
void			is_sorted(t_info *stack_info);
void			print_arr(t_info *stack_info);

/***	index utilities (utils.c)	***/
int				ft_min_index(int *stack, int size);
int				ft_max_index(int *stack, int size);
int				srch_index(int b, t_info *stack_info);
int				srch_pivot(int *stack, int top_index);

/***	3 and 5 elements functions (little_sort.c)	***/
void			sort_3(t_info *stack_info);
void			sort_5(t_info *stack_info);

/***	calculating movements (mov_utils.c)	***/
int				ft_abs(int value);
int				count_mov(int top_index, int index);
int				calcul_mov(t_info *stack_info, int index_b);
int				srch_min_mov(t_info *stack_info, int pivot);

/***	first pivot move functions (pivot_utils.c)	***/
void			a_to_b(t_info *stack_info, int index, int *count_pb);
int				srch_top(t_info *stack_info, int pivot);
int				srch_bot(t_info *stack_info, int pivot);
void			srch_and_move(t_info *stack_info, int pivot, int *count_pb);
int				pivot_sort(t_info *stack_info, int *count_pb);

/***	action functions (action.c)	***/
void			two_dir_r(t_info *stack_info, int mov_a, int mov_b);
void			action_pos(t_info *stack_info, int mov_a, int mov_b);
void			action_neg(t_info *stack_info, int mov_a, int mov_b);
void			action_b(t_info *stack_info, int index_b);

/***	big elements functions (big_sort.c)	***/
void			rotate_top(t_info *stack_info);
void			rep_action_b(t_info *stack_info, int n, int pivot);
void			big_sort(t_info *stack_info);

/***	push and swap functions (ft_ps.c)	***/
void			sa(t_info *stack_info);
void			sb(t_info *stack_info);
void			ss(t_info *stack_info);
void			pa(t_info *stack_info);
void			pb(t_info *stack_info);

/***	rotate functions (ft_r.c)	***/
void			ra(t_info *stack_info);
void			rb(t_info *stack_info);
void			rr(t_info *stack_info);

/***	reverse rotate fuctions (ft_rr.c)	***/
void			rra(t_info *stack_info);
void			rrb(t_info *stack_info);
void			rrr(t_info *stack_info);

#endif
