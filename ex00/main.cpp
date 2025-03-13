/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:02:41 by palu              #+#    #+#             */
/*   Updated: 2025/03/07 18:32:32 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie("Zombie1");

	zombie.announce();
	Zombie *zombie1 = newZombie("Zombie2");
	randomChump("Zombie3");
	delete (zombie1);

	return (0);
}