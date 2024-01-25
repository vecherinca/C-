/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:35 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/25 19:34:52 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replacer::replace_(std::string input, std::string to_replace)
{
	std::string content_input = "";
	std::ifstream read (this -> input_file.c_str(), std::ios::in);
	std::ofstream write (this -> output_file.c_str(), std::ios::out);
	std::getline(read, content_input, '\0');
	
	


}