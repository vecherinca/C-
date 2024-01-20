/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:01 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 17:24:12 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j]; j++)
                std::cout << (char) toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return(EXIT_SUCCESS);
}