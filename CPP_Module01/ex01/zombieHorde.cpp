/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:43:28 by sojung            #+#    #+#             */
/*   Updated: 2022/07/21 18:35:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie*	zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		zombieHorde[i] = Zombie(name);
	return (zombieHorde);
}
