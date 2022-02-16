/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:41:19 by sojung            #+#    #+#             */
/*   Updated: 2022/02/16 16:41:36 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

/*
/		|FT_PRINTF FUNCTIONS|
*/

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long int n);
int		ft_putptr(unsigned long ptr, int flag);
int		ft_puthex(unsigned int n, int index);
char	ft_detect_format(char c);
void	ft_print_arg(char type, int *i, int *count, va_list ap);
int		ft_printf(const char *s, ...);


#endif
