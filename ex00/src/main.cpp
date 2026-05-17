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

	std::cout << "1 : Heap" << std::endl;
	std::cout << "2 : stack" << std::endl;
	std::cin >> index;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	if (index == 1)
	{

	}
	else if (index == 2)
	{
		
	}
	return (0);
}
