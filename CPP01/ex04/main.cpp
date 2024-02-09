/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:43 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/09 19:26:07 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <inputfile> <string_to_replace><replace_with_string>" << std::endl;
        return 1;
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0') {
        std::cerr << "Neither <string_to_replace> nor <replace_with_string> can be an empty string." << std::endl;
        return 1;
    }
    Replacer SED;
    SED.replace_(argv[1], argv[2], argv[3]);
    
}