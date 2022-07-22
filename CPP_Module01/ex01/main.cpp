/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:11:20 by sojung            #+#    #+#             */
/*   Updated: 2022/07/21 18:36:04 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Foo");

	Zombie*	zombieHorde = zombie.zombieHorde(10, "Hooorde");
	for (int i = 0; i < 10; i++)
		zombieHorde[i].announce();
	delete [] zombieHorde;
	return (0);
}
