#include "../headers/Dog.hpp"

Dog::Dog(void):Animal("Dog")
{
    std::cout << "<Dog> constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "<Dog> destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "<Dog says>: OUAF OUAF. Human, you are the best person in the world!" << std::endl;
}