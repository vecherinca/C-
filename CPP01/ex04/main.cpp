/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:43 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/29 22:16:56 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <inputfile> <string_to_replace><replace_with_string>" << std::endl;
        return 1;
    }
    Replacer SED;
    SED.replace_(argv[1], argv[2], argv[3]);
    
}