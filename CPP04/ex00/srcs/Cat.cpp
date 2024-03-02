#include "../headers/Cat.hpp"

Cat::Cat(void):Animal("Cat")
{
    std::cout << "<Cat> constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "<Cat> destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "<Cat says>: MEWMMEWMEW. Human, Feed me!" << std::endl;
}