/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:35 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/09 19:22:33 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replacer::replace_(std::string input, std::string to_replace, std::string replaced)
{
    
	std::string content_input = "";
    this -> input_file = input;
    
	std::ifstream read (this -> input_file.c_str(), std::ios::in);
    size_t found;
	size_t pos = 0;
    size_t s1_len = to_replace.length();
	std::string result;
	
    
    std::getline(read, content_input, '\0');
    
    if (read)
    {
        while (pos < content_input.length()) {
        found = content_input.find(to_replace, pos);
        if (found != std::string::npos) {
            result += content_input.substr(pos, found - pos) + replaced;
            pos = found + s1_len;
        } else {
            result += content_input.substr(pos);
            break;
        }
    }
        std::ofstream write (input.append(".replace").c_str(), std::ios::out);
        write << result;
        read.close();
        write.close();
    }
    else 
    {
        std::cerr << "Error while trying to read a file. Check whether file exist or have a permission" << std::endl;
    }
}