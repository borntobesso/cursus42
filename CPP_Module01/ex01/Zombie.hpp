/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:17:18 by sojung            #+#    #+#             */
/*   Updated: 2022/07/21 18:39:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void		announce(void);
	std::string	getName(void);
	Zombie*		newZombie(std::string name);
	Zombie*		zombieHorde(int N, std::string name);
	void		randomChump(std::string name);
};
