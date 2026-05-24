/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:37:21 by jleray            #+#    #+#             */
/*   Updated: 2026/05/23 17:37:21 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sed.hpp"

std::string	findAndReplace(std::string line, std::string search, std::string replace)
{
	size_t pos = 0;

	pos = line.find(search, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, search.length());
		line.insert(pos, replace);
		pos = line.find(search, pos);
	}
	return (line);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string	in = av[1], out = av[1], search = av[2], replace = av[3];
	std::string line;
	out += ".replace";
	std::ifstream inFile;
	inFile.open(av[1]);
	if (search == "\0")
		return (1);
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open input file." << std::endl;
		return (1);
	}
	std::ofstream outFile;
	outFile.open(out.c_str());
	if (!outFile.is_open())
	{
		inFile.close();
		std::cerr << "Error: Could not create output file" << std::endl;
		return (1);
	}
	while (std::getline(inFile, line))
	{
		line = findAndReplace(line, search, replace);
		outFile << line << std::endl;
	}
	return (0);
}
