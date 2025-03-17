/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:32:06 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/14 14:41:09 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>

class Sed
{
	public :
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed();
		void	replace();
	private :
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif