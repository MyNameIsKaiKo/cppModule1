/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:21:18 by jleray            #+#    #+#             */
/*   Updated: 2026/05/22 18:21:18 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "Memory adrress of the string :";
	std::cout << &s << std::endl;
	std::cout << "Memory address held by the PTR :";
	std::cout << stringPTR << std::endl;
	std::cout << "Memory address held by the REF :";
	std::cout << &stringREF << std::endl;
	std::cout << "The value of the string :";
	std::cout << s << std::endl;
	std::cout << "The value pointed to by PTR :";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by REF :";
	std::cout << stringREF << std::endl;
	return (0);
}
