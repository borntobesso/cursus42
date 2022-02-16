/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:34:29 by sojung            #+#    #+#             */
/*   Updated: 2022/02/16 22:26:49 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	handle_sigusr1(int sig)
{
	
}

void	handle_sigusr(int sig, siginfo_t *siginfo, void *)
{

}

int	main(void)
{
	struct sigaction sa;
	sigset_t	set;
	siginfo_t	siginfo;

	sa.sa_handler = &handle_sigusr1;//
	sa.sa_sigaction = &handle_sigusr;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&set);
	sigaddset(&set, SIGUSR1);
	sigaddset(&set, SIGUSR2);
	sigaction(SIGUSR1, &sa, NULL);
	ft_printf("%d\n", getpid());
	pause();
	// signal(SIGUSR1, &handle_sigusr1);
}
