/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:52:19 by mklimina          #+#    #+#             */
/*   Updated: 2024/03/02 17:13:48 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Animal.hpp"
#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/WrongCat.hpp"

int main() {
	
	std::cout << "\033[1;32m---------- Constructors ----------\033[0m" << std::endl;

    const Animal *meta = new Animal();
	const WrongAnimal *wrongmeta = new WrongAnimal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
	const WrongAnimal *test = new WrongCat();
	std::cout << "\033[1;32m----------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;36m" << j->getType() << " \033[0m" << std::endl;
    std::cout << "\033[1;36m" << i->getType() << " \033[0m" << std::endl;
	 std::cout << "\033[1;36m" << test->getType() << " \033[0m" << std::endl;

    std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
    i->makeSound();
    std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
    j->makeSound();
    std::cout << "\033[1;33m--------------------------------\033[0m" << std::endl;
    meta->makeSound();

	std::cout << "\033[1;32m---------- Class without <virtual> ----------\033[0m" << std::endl;
	wrongmeta->makeSound();
    std::cout << "\033[1;32m--------------------------------\033[0m" << std::endl;
	test->makeSound();
	std::cout << "\033[1;31m---------- Destructors ----------\033[0m" << std::endl;

    delete meta;
    delete j;
    delete i;
	delete wrongmeta;
	delete test;
	std::cout << "\033[1;31m---------------------------------\033[0m" << std::endl;
    return 0;
}
