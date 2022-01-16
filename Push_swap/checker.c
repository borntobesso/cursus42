/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:24:36 by sojung            #+#    #+#             */
/*   Updated: 2022/01/16 21:05:30 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_a_dup(t_info *stack_info, t_info *stack_dup)
{
	int	*stack_a;
	int	i;

	stack_a = malloc(sizeof(int) * stack_dup->stack_size);
	if (!stack_a)
		return (NULL);
	i = 0;
	while (i < stack_dup->stack_size)
	{
		stack_a[i] = stack_info->stack_a[i];
		i++;
	}
	return (stack_a);
}

int	*stack_b_dup(t_info *stack_dup)
{
	int	*stack_b;
	int	i;

	stack_b = malloc(sizeof(int) * stack_dup->stack_size);
	if (!stack_b)
		return (NULL);
	i = 0;
	while (i < stack_dup->stack_size)
	{
		stack_b[i] = 0;
		i++;
	}
	return (stack_b);
}

void	ft_dup_info(t_info *stack_info, t_info *stack_dup)
{
	stack_dup->stack_size = stack_info->stack_size;
	stack_dup->top_a = stack_info->top_a;
	stack_dup->top_b = -1;
	stack_dup->stack_a = stack_a_dup(stack_info, stack_dup);
	stach_dup->stack_b = stack_b_dup(stack_dup);
}

void	ft_free(t_info *stack_info, t_info *stack_dup)
{
	free(stack_info->stack_a);
	free(stack_info->stack_b);
	free(stack_dup->stack_a);
	free(stack_dup->stack_b);
}

int	ops_count(char const *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == '\n')
			s++;
		if (*s && *s != '\n')
		{
			count++;
			while (*s && *s != '\n')
				s++;
		}
	}
	return (count);
}

char	*ops_malloc(char const *s)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (s[len] && s[len] != '\n')
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s && *s != '\n')
	{
		res[i] = *s;
		i++;
		s++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_free_split(char **res, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(res[i]);
		i++;
	}
	free(res);
	exit (1);
}
	
char	**ft_split(char const *s)
{
	int		size;
	char	**res;
	int		i;

	size = ops_count(s);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == '\n')
			s++;
		if (*s && *s != '\n')
		{
			res[i] = ops_malloc(s);
			if (res[i] == NULL)
				ft_free_split(res, i);
			i++;
			while (*s && *s != '\n')
				s++;
		}
	}
	res[i] = 0;
	return (res);
}

int	main(int argc, char **argv)
{
	t_info	stack_info;
	t_info	stack_dup;
	char	buf[40000]
	char	**ops;

	if (argc > 1)
	{
		check_valid_args(argc - 1, argv + 1, &stack_info);
		ft_init_info(&stack_info, argc - 1, argv + 1);
		is_sorted(&stack_info);
		ft_dup_info(&stack_info, &stack_dup);
		if (argc == 3)
			sa(&stack_info);
		else if (argc == 4)
			sort_3(&stack_info);
		else if (argc == 6)
			sort_5(&stack_info);
		else
			big_sort(&stack_info);
		read(1, buf, 39999);
		ops = ft_split(buf);
	}
}
