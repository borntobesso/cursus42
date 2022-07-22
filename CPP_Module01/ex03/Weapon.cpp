/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:28:46 by sojung            #+#    #+#             */
/*   Updated: 2022/07/22 18:40:35 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){this->type = type;}

Weapon::~Weapon(){}

const std::string	&getType(void)
{
	return (this->type);
}
void	setType(std::string type)
{
	this->type = type;
}
