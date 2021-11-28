/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:50:40 by sojung            #+#    #+#             */
/*   Updated: 2021/11/28 17:11:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

/*************************************/
/* Test functions for Libc functions */
/*************************************/

/* isalpha */
void	ft_isalpha_test()
{
	int	res_ft_isalpha[10];
	int	res_isalpha[10];
	int	i;
	int	j;

	printf("\n\n---Test ft_isalpha()---");
	i = 0;
	j = 0;
	while (i < 10)
	{
		res_ft_isalpha[i] = ft_isalpha(j);
		res_isalpha[i] = isalpha(j);
		i++;
		j += 20;
	}
	i = 0;
	printf("\n\nresult of ft_isalpha :\n");
	while (i < 10)
	{
		printf("%d ", res_ft_isalpha[i]);
		i++;
	}	
	i = 0;
	printf("\nresult of isalpha :\n");
	while (i < 10)
	{
		printf("%d ", res_isalpha[i]);
		i++;
	}
}

/* isdigit */
void	ft_isdigit_test()
{
	int	res_ft_isdigit[10];
	int	res_isdigit[10];
	int	i;
	int	j;

	printf("\n\n---Test ft_isdigit()---");
	i = 0;
	j = 0;
	while (i < 10)
	{
		res_ft_isdigit[i] = ft_isdigit(j);
		res_isdigit[i] = isdigit(j);
		i++;
		j += 25;
	}
	i = 0;
	printf("\n\nresult of ft_isdigit :\n");
	while (i < 10)
	{
		printf("%d ", res_ft_isdigit[i]);
		i++;
	}	
	i = 0;
	printf("\nresult of isdigit :\n");
	while (i < 10)
	{
		printf("%d ", res_isdigit[i]);
		i++;
	}
}

/* isalnum */
void	ft_isalnum_test()
{
	int	res_ft_isalnum[10];
	int	res_isalnum[10];
	int	i;
	int	j;

	printf("\n\n---Test ft_isalnum()---");
	i = 0;
	j = 0;
	while (i < 10)
	{
		res_ft_isalnum[i] = ft_isalnum(j);
		res_isalnum[i] = isalnum(j);
		i++;
		j += 15;
	}
	i = 0;
	printf("\n\nresult of ft_isalum :\n");
	while (i < 10)
	{
		printf("%d ", res_ft_isalnum[i]);
		i++;
	}	
	i = 0;
	printf("\nresult of isalnum :\n");
	while (i < 10)
	{
		printf("%d ", res_isalnum[i]);
		i++;
	}
}

/* isascii */
void	ft_isascii_test()
{
	int	res_ft_isascii[10];
	int	res_isascii[10];
	int	i;
	int	j;

	printf("\n\n---Test ft_isascii()---");
	i = 0;
	j = 0;
	while (i < 10)
	{
		res_ft_isascii[i] = ft_isascii(j);
		res_isascii[i] = isascii(j);
		i++;
		j += 35;
	}
	i = 0;
	printf("\n\nresult of ft_isascii :\n");
	while (i < 10)
	{
		printf("%d ", res_ft_isascii[i]);
		i++;
	}	
	i = 0;
	printf("\nresult of isascii :\n");
	while (i < 10)
	{
		printf("%d ", res_isascii[i]);
		i++;
	}
}

/* isprint */
void	ft_isprint_test()
{
	int	res_ft_isprint[128];
	int	res_isprint[128];
	int	i;
	int	j;

	printf("\n\n---Test ft_isprint()---");
	i = 0;
	j = 0;
	while (i < 128)
	{
		res_ft_isprint[i] = ft_isprint(j);
		res_isprint[i] = isprint(j);
		i++;
		j++;
	}
	i = 0;
	printf("\n\nresult of ft_isprint :\n");
	while (i < 128)
	{
		printf("%d ", res_ft_isprint[i]);
		i++;
	}	
	i = 0;
	printf("\nresult of isprint :\n");
	while (i < 128)
	{
		printf("%d ", res_isprint[i]);
		i++;
	}
}

/* strlen */
void	ft_strlen_test()
{
	char	*s1 = "hello world";
	char	*s2 = "!@#SOuSOu!@#\t";
	char	*s3 = "";
//	char	*s4 = NULL;
	char	*s5 = " ";
	char	*s6 = "\n\n\r\t\b";

	printf("\n\n---Test ft_strlen()---");
	printf("\n\nTest 1 :");
	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s1, ft_strlen(s1), s1, strlen(s1));
	printf("\n\nTest 2 :");
	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s2, ft_strlen(s2), s2, strlen(s2));
	printf("\n\nTest 3 :");
	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s3, ft_strlen(s3), s3, strlen(s3)); 
//	printf("\n\nTest 4 :");
//	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s4, ft_strlen(s4), s4, strlen(s4)); 
	printf("\n\nTest 5 :");
	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s5, ft_strlen(s5), s5, strlen(s5)); 
	printf("\n\nTest 6 :");
	printf("ft_strlen(\"%s\") : %ld\nstrlen(\"%s\") : %ld\n", s6, ft_strlen(s6), s6, strlen(s6));
}

/* memset */
void	ft_memset_test()
{
	char	*s1 = "hello world";
	char	*s2 = "hello world";
	char	*s3 = "  \0\nhi";
	char	*s4 = "  \0\nhi";
	int	arr1[5] = {0, 1, 2, 3, 4};
	int	arr2[5] = {0, 1, 2, 3, 4};
	int	arr3[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int	arr4[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	printf("\n\n---Test ft_memset()---");
	printf("\n\nTest 1 :");
	printf("ft_memset : %s\nmemset : %s\n", (char *)ft_memset(s1, 'a', 4), (char *)memset(s2, 'a', 4));


	
}

int	main(void)
{
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	return (0);
}
