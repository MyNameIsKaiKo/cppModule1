/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:48:12 by jleray            #+#    #+#             */
/*   Updated: 2026/05/17 20:48:12 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	index;
	std::string name;

	std::cout << "1 : Heap" << std::endl;
	std::cout << "2 : Stack" << std::endl;
	std::cin >> index;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::getline(std::cin, name);
	if (index == 1)
	{
		Zombie* z;

		z = newZombie(name);
		z->announce();
		std::cout << z->getName() << ": has been destroyed" << std::endl;
		delete (z);
	}
	else if (index == 2)
		randomChump(name);
	else
		std::cout << "Wrong number" << std::endl;
	return (0);
}
