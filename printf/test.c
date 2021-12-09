/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:55:20 by sojung            #+#    #+#             */
/*   Updated: 2021/12/08 17:14:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		ret1;
	int		ret2;
	int		ret3;
	int		ret4;
	int		var1;
	char	cha1;

	var1 = 4;
	cha1 = 'S';
	ret1 = printf("This is a test\n");
	ret2 = printf("there are\\\t%d monkeys\n", var1);
	ret3 = printf("an \"%c\" is written on the wall.\n", cha1);
	ret4 = printf("\n");
	printf("\nreturn value 1 : %d (%X)\n", ret1, ret1);
	printf("return value 2 : %d (%X)\n", ret2, ret2);
	printf("return value 3 : %d (%X)\n", ret3, ret3);
	printf("return value 4 : %d (%X)\n", ret4, ret4);
	printf("\naddress of ret1 : %p\n", &ret1);
	printf("address of ret2 : %p\n", &ret2);
	return (0);
}
