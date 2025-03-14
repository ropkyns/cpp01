/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:30:12 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/14 18:53:50 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;
	if(argc != 2)
	{
		std::cout << "Usage : ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}