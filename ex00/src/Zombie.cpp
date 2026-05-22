/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:25:34 by jleray            #+#    #+#             */
/*   Updated: 2026/05/17 20:25:34 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
	return ;
}

std::string	Zombie::getName()
{ 
	return (this->_name);
}
