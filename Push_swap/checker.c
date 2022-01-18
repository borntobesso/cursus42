/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:24:36 by sojung            #+#    #+#             */
/*   Updated: 2022/01/18 17:29:56 by sojung           ###   ########.fr       */
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

void	print_res(t_info *stack_info)
{
	if (is_sorted_checker(stack_info) && (stack_info->top_b == -1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free(stack_info);
}	

void	ft_read(t_list **ops_lst)
{
	char	save[4];
	char	c;
	int		i;
	t_list	*new;
	char	*dup;

	i = 0;
	while (read(0, &c, 1))
	{
		save[i] = c;
		i++;
		if (c == '\n')
		{
			dup = ft_strdup(save);
			if (dup)
			{
				new = ft_lstnew(ft_strdup(save));
				ft_lstadd_back(ops_lst, new);
			}
			i = 0;
		}	
	}
}

int	main(int argc, char **argv)
{
	t_info	stack_info;
	char	buf[40000];
	int		i;
	char	**ops;

	if (argc > 1)
	{
		check_valid_args(argc - 1, argv + 1, &stack_info);
		ft_init_info(&stack_info, argc - 1, argv + 1);
		is_sorted(&stack_info);
		i = read(0, buf, 39999);
		buf[i] = '\0';
		ops = ft_split(buf, &stack_info);
		do_ops(ops, &stack_info);
		print_res(&stack_info);
	}
	return (0);
}
