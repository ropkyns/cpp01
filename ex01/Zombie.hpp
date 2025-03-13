/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:04:00 by palu              #+#    #+#             */
/*   Updated: 2025/03/12 14:03:55 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name(std::string str);
	private:
		std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif