/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:41:09 by jleray            #+#    #+#             */
/*   Updated: 2026/05/22 19:41:09 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon* weapon)
{
	this->_weapon = weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
}
