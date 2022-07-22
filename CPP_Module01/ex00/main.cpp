/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:22:40 by sojung            #+#    #+#             */
/*   Updated: 2022/07/21 15:40:07 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie firstZombie("Foo");
	Zombie* newZombie = firstZombie.newZombie("Bar");

	newZombie->announce();
	firstZombie.randomChump("Random1");
	std::cout << "newZombie's name: " << newZombie->getName() << std::endl;
	delete(newZombie);
	return (0);
}
