/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:04:50 by jleray            #+#    #+#             */
/*   Updated: 2026/05/22 17:04:50 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie* z;
	int 	i = 0;

	z = new Zombie[N];
	while (i < N)
	{
		z[i].setName(name);
		i++;
	}
	return (z);
}
