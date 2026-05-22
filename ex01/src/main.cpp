/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:30:03 by jleray            #+#    #+#             */
/*   Updated: 2026/05/22 17:30:03 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name;
	int			N;
	Zombie*		horde;
	int			i;

	i = 0;
	N = 0;
	std::cout << "Enter the ammount of Zombie you want" << std::endl;
	std::cin >> N;
	if (N == 0)
		return (0);
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << "Enter the name of those Zombies" << std::endl;
	std::getline(std::cin, name);
	if (name == "\0")
		return (0);
	horde = zombieHorde(N, name);
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] (horde);
	return (0);
}
