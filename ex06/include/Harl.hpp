/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:34:04 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/14 18:38:23 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>

class Harl
{
	private :
		void	debug();
		void	info();
		void	warning();
		void	error();

	public :
		Harl();
		~Harl();
		void (Harl::*ptr[4])();
		void	complain(std::string level);
		
};

#endif