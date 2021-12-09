/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:08:33 by sojung            #+#    #+#             */
/*   Updated: 2021/12/09 18:09:56 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_detect_format(char *s)
{
	char	formats[10]

	formats = "cspdiuxX%";
	if (
}

int	ft_printf(const char *s, ...)
{
	va_list ap;
	int	i;
	int	type;

	va_start(ap, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			type = ft_detect_format(&s[i + 1]);

	}
}
