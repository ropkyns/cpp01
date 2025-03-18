/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:32:39 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/18 12:56:32 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Sed::~Sed()
{
}

void	Sed::replace()
{
	std::ifstream	input(this->_filename.c_str());
	if (!input.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	std::ofstream	output(this->_filename.append(".replace").c_str());
	if (!output.is_open())
	{
		std::cout << "Error: could not create file" << std::endl;
		return ;
	}
	if(this->_s1.empty())
	{
		std::cout << "Error: s1 is empty" << std::endl;
		return ;
	}
	std::string	line;
	while (std::getline(input, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(this->_s1, pos)) != std::string::npos)
		{
			line.erase(pos, this->_s1.length());
			line.insert(pos, this->_s2);
		}
		output << line;
		if (!input.eof())
			output << std::endl;
	}
}