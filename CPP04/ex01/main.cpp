#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include <iostream>


int main() {
    const int ARRAY_SIZE = 10; 
    Animal* animals[ARRAY_SIZE];

    std::cout << "\033[1;36m" << "-------- Creating Animals --------" << "\033[0m" << std::endl;
    for(int i = 0; i < ARRAY_SIZE / 2; ++i) {
        std::cout << "\033[1;35m" << "Creating Dog " << i + 1 << "\033[0m" << std::endl;
        animals[i] = new Dog();
    }
    for(int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
        std::cout << "\033[1;35m" << "Creating Cat " << i - ARRAY_SIZE / 2 + 1 << "\033[0m" << std::endl;
        animals[i] = new Cat();
    }

    std::cout << "\033[1;36m" << "-------- Deleting Animals --------" << "\033[0m" << std::endl;
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << "\033[1;33m" << "Deleting Animal " << i + 1 << "\033[0m" << std::endl;
        delete animals[i];
    }
	std::cout << "\033[1;36m" << "-------- Testing Offical Main --------" << "\033[0m" << std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();


    delete j;
    delete i;

    return 0;
}
