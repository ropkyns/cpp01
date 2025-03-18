/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:02:41 by palu              #+#    #+#             */
/*   Updated: 2025/03/18 12:55:47 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"



int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		Zombie	*horde1 = zombieHorde(5, "Zombibie");
		Zombie	*horde2 = zombieHorde(10, "Zomzombie");
		
		delete [] horde1;
		delete [] horde2;
	}
	if (argc == 2)
	{
		if (atoi(argv[1]) > 0 || atoi(argv[1]) > __INT_MAX__)
		{
			Zombie	*horde1 = zombieHorde(atoi(argv[1]), "Zombibie");
			Zombie	*horde2 = zombieHorde(atoi(argv[1]), "Zomzombie");
			
			delete [] horde1;
			delete [] horde2;
		}
		else
			std::cout << "Please enter a positive number" << std::endl;
	}
	return (0);
}