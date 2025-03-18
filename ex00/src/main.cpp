/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:02:41 by palu              #+#    #+#             */
/*   Updated: 2025/03/18 12:56:02 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main()
{
	Zombie	zombie("Zombie1");

	zombie.announce();
	Zombie *zombie1 = newZombie("Zombie2");
	randomChump("Zombie3");
	delete (zombie1);

	return (0);
}