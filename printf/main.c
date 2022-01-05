/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:55:20 by sojung            #+#    #+#             */
/*   Updated: 2021/12/16 13:19:43 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"

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
	printf("-------real printf-------\n\n");
	ret1 = printf("This is a test\n");
	ret2 = printf("there are\\\t%d monkeys\n", var1);
	ret3 = printf("an \"%c\" is written on the wall.\n", cha1);
	ret4 = printf("\n");
	printf("\nreturn value 1 : %d (%X)\n", ret1, ret1);
	printf("return value 2 : %d (%X)\n", ret2, ret2);
	printf("return value 3 : %d (%X)\n", ret3, ret3);
	printf("return value 4 : %d (%X)\n", ret4, ret4);
	printf("\naddress of ret1(%%p) : %p\n", &ret1);
	printf("address of ret1(%%lx) : %x\n", (unsigned int)(long int)&ret1);
	printf("\naddress of ret2(%%p) : %p\n", &ret2);
	printf("address of ret2(%%lX) : %X\n", (unsigned int)(long int)&ret2);
	printf("%p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("%p %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf("%p %p\n", (void *)0, (void *)0);
	printf("five percentages : %%%%% \n");
	printf("a percentage in the middle : % \n");
	ft_printf("\n\n-------my ft_printf-------\n\n");
	ret1 = ft_printf("This is a test\n");
	ret2 = ft_printf("there are\\\t%d monkeys\n", var1);
	ret3 = ft_printf("an \"%c\" is written on the wall.\n", cha1);
	ret4 = ft_printf("\n");
	ft_printf("\nreturn value 1 : %d (%X)\n", ret1, ret1);
	ft_printf("return value 2 : %d (%X)\n", ret2, ret2);
	ft_printf("return value 3 : %d (%X)\n", ret3, ret3);
	ft_printf("return value 4 : %d (%X)\n", ret4, ret4);
	ft_printf("\naddress of ret1(%%p) : %p\n", &ret1);
	ft_printf("address of ret1(%%x) : %x\n", (long int)&ret1);
	ft_printf("\naddress of ret2(%%p) : %p\n", &ret2);
	ft_printf("address of ret2(%%X) : %X\n", (long int)&ret2);
	ft_printf("%p %p\n", LONG_MIN, LONG_MAX);
	ft_printf("%p %p\n", ULONG_MAX, -ULONG_MAX);
	ft_printf("%p %p\n", 0, 0);
	ft_printf("five percentages : %%%%% \n");
	ft_printf("a percentage in the middle : % \n");

	return (0);
}
