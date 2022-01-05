/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:32:23 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 19:38:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a; // to free at the end
	int	*stack_b; // to free at the end
	struct s_info	*stack_info; // to free at the end

	if (argc > 1)
	{
		if (check_valid_args(argc - 1, argv + 1) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		stack_a = ft_init_a(argc - 1, argv + 1);
		stack_b = ft_init_b(argc - 1);
		stack_info = ft_init_info(argc - 1);
	}

	int	i;

	i = stack_info->stack_size - 1;
	while (i >= 0)
	{
		printf("%d %d\n", stack_a[i], stack_b[i]);
		i--;
	}
	printf("- -\n");
	printf("a b\n");
	return (0);
}
