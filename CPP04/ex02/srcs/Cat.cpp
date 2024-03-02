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
        delete this-> brain;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}

void    Cat::setIdea(const int& index, const std::string& idea) {
    if (index < 100 && index >= 0) {
        this->brain->_setIdea(index, idea);
    }
   
}

void    Cat::displayIdeas() {
    for (int i=0; i<100; i++) {
        std::cout << "cat idea n" << i << ": \'" << this->brain->getIdea(i) << "\'\n";
    }
}