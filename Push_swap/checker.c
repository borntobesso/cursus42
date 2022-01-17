/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:24:36 by sojung            #+#    #+#             */
/*   Updated: 2022/01/17 19:57:12 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_checker(t_info *stack_dup)
{
	int	size;
	int	i;

	size = stack_dup->top_a;
	i = 0;
	while (i < size)
	{
		if (stack_dup->stack_a[i + 1] > stack_dup->stack_a[i])
			return (0);
		i++;
	}
	return (1);
}

void	print_res(t_info *stack_info, t_info *stack_dup)
{
	if (is_sorted_checker(stack_dup) && (stack_dup->top_b == -1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free(stack_info, stack_dup);
}	

void	print_stack(t_info *stack)
{
	int	i;

	i = stack->stack_size - 1;
	while (i-- >= 0)
		printf("%d\n", stack->stack_a[i]);
}
int	main(int argc, char **argv)
{
	t_info	stack_info;
	t_info	stack_dup;
	char	buf[40000];
	char	**ops;

	if (argc > 1)
	{
		check_valid_args(argc - 1, argv + 1, &stack_info);
		ft_init_info(&stack_info, argc - 1, argv + 1);
		is_sorted(&stack_info);
		ft_dup_info(&stack_info, &stack_dup);
		print_stack(&stack_info);
		print_stack(&stack_dup);
		if (argc == 3)
			sa(&stack_info);
		else if (argc == 4)
			sort_3(&stack_info);
		else if (argc == 6)
			sort_5(&stack_info);
		else
			big_sort(&stack_info);
		read(1, buf, 39999);
		ops = ft_split(buf, &stack_info, &stack_dup);
		do_ops(ops, &stack_dup);
		print_stack(&stack_dup);
		print_res(&stack_info, &stack_dup);
	}
	return (0);
}
