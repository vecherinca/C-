#include "headers/AAnimal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include <iostream>


int main() {
    
    //const AAnimal youcantcreateme;

    const int ARRAY_SIZE = 10; 
    AAnimal* AAnimals[ARRAY_SIZE];

    std::cout << "\033[1;36m" << "-------- Creating AAnimals --------" << "\033[0m" << std::endl;
    for(int i = 0; i < ARRAY_SIZE / 2; ++i) {
        std::cout << "\033[1;35m" << "Creating Dog " << i + 1 << "\033[0m" << std::endl;
        AAnimals[i] = new Dog();
    }
    for(int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
        std::cout << "\033[1;35m" << "Creating Cat " << i - ARRAY_SIZE / 2 + 1 << "\033[0m" << std::endl;
        AAnimals[i] = new Cat();
    }

    std::cout << "\033[1;36m" << "-------- Deleting AAnimals --------" << "\033[0m" << std::endl;
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << "\033[1;33m" << "Deleting AAnimal " << i + 1 << "\033[0m" << std::endl;
        delete AAnimals[i];
    }
	std::cout << "\033[1;36m" << "-------- Testing Offical Main --------" << "\033[0m" << std::endl;
	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();


    delete j;
    delete i;

    return 0;
}
