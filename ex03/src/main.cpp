/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:51:02 by jleray            #+#    #+#             */
/*   Updated: 2026/05/22 18:51:02 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{	
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	Weapon club2 = Weapon("crude spied club");
	HumanB jin("Jin");
	jin.setWeapon(&club2);
	jin.attack();
	club2.setType("some other type of club");
	jin.attack();
	return (0);
}
