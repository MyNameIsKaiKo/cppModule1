/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d43.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/05/22 19:27:00 by jleray            #+#    #+#             */
/*   Updated: 2027/05/22 19:27:00 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) 
{}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

