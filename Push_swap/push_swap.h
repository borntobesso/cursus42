/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:39:44 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 19:33:07 by sojung           ###   ########.fr       */
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
} t_info;

int	*ft_init_a(int size, char **args);
int	*ft_init_b(int size);
struct s_info	*ft_init_info(int size);

int	ft_isdigit(char c);
int	check_double_arg(int pos, char **argv);
long long int	ft_atoi(const char *s);
int	check_valid_args(int argc, char **argv);

void	sa(t_info *stack_info, int *stack_a);
void	sb(t_info *stack_info, int *stack_b);
void	ss(t_info *stack_info, int *stack_a, int *stack_b);
void	pa(t_info *stack_info, int *stack_a, int *stack_b);
void	pb(t_info *stack_info, int *stack_a, int *stack_b);

void	ra(t_info *stack_info, int *stack_a);
void	rb(t_info *stack_info, int *stack_b);
void	rr(t_info *stack_info, int *stack_a, int *stack_b);

void	rra(t_info *stack_info, int *stack_a);
void	rrb(t_info *stack_info, int *stack_b);
void	rrr(t_info *stack_info, int *stack_a, int *stack_b);

#endif
