/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:25 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/29 21:40:54 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
# include <iostream>
# include <fstream>
# include <string>

class Replacer 
{
	private:
		std::string input_file;
		std::string output_file;

	public:
		std::string return_replaced_value();
		void replace_(std::string input, std::string to_replace, std::string replaced);
		
}
;
#endif