/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:17:05 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 19:23:14 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cstdlib>
# include <iostream>
# include <limits>
# include <string>

const std::string RED = "\033[31m";
const std::string ORANGE = "\033[33m";
const std::string YELLOW = "\033[93m";
const std::string GREEN = "\033[32m";
const std::string BLUE = "\033[34m";
const std::string PURPLE = "\033[35m";
const std::string RESET = "\033[0m";

int main(void)
{
	std::string new_variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &new_variable;
	std::string &stringREF  = new_variable;

	std::cout  << RED << "The memory address of the string variable:"<< &new_variable << std::endl;
	std::cout << BLUE << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << YELLOW << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << RESET << "________________________________________________" << std::endl;
	std::cout << RED  << "The value of the string variable:" << new_variable<< std::endl;;
	std::cout << BLUE << "The value pointed to by stringPTR:"<< stringPTR << std::endl;;
	std::cout << YELLOW << "The value pointed to by stringREF:" << stringREF << std::endl;;
}