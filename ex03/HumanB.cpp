/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:18:52 by palu              #+#    #+#             */
/*   Updated: 2025/03/14 14:49:28 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL || this->_weapon->getType().empty())
		std::cout << this->_name << " has no weapon to attack with" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}