#include "../headers/WrongCat.hpp"
#include "../headers/WrongAnimal.hpp"

WrongCat::WrongCat(void):WrongAnimal("WrongCat")
{
    std::cout << "<WrongCat> constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "<WrongCat> destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "<WrongCat says>: MEWMMEWMEW. Human, you are the best" << std::endl;
}