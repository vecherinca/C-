#include "../headers/Cat.hpp"

Cat::Cat(void):AAnimal("Cat")
{
    try
	{
	    this->brain = new Brain();
	}
	catch (const std::bad_alloc &e)
	{
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}

    std::cout << "<Cat> 🐈 constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "<Cat> destructor called" << std::endl;
    delete  this->brain;
}

void Cat::makeSound() const
{
    std::cout << "<Cat says>: MEWMMEWMEW. Human, Feed me!" << std::endl;
}

Cat::Cat( const Cat& src )
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "<Cat> copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}