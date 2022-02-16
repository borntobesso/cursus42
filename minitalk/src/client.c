/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:34:43 by sojung            #+#    #+#             */
/*   Updated: 2022/02/16 22:26:55 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int main(int argc, char **argv)
{
	int		pid;
	char	*msg;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		msg = ft_strdup(argv[2]);
	}
	else
		ft_printf("Wrong input count.\n");
	return (0);
}
