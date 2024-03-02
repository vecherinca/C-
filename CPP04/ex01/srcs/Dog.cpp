#include "../headers/Dog.hpp"

Dog::Dog(void)
	: Animal("Dog")
{
	try
	{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc &e)
	{
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
	std::cout << "<Dog> 🐕 constructor called" << std::endl;
}

Dog::~Dog(void)
{
    delete  this->brain;
	std::cout << "<Dog> destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "<Dog says>: OUAF OUAF. Human,you are the best person in the world!" << std::endl;
}
Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "<Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}