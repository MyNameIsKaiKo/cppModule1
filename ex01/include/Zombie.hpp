/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:10:23 by jleray            #+#    #+#             */
/*   Updated: 2026/05/17 20:10:23 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	~Zombie();
	void		announce(void);
	void		setName(std::string name);
	std::string getName(void);
};

Zombie	*zombieHorde(int N, std::string name);
#endif
