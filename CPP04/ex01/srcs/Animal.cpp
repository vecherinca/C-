#include "../headers/Animal.hpp"

Animal::Animal() {
    std::cout << "Default ANIMAL constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type) {
    std::cout << "<Animal> 🐾 constructor called with the type" << type << " assigned."<< std::endl;
}

Animal::Animal(const Animal& cls)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cls;
}

Animal &Animal::operator=(const Animal &cls)
{
    std::cout << "Assignment operator is called" << std::endl;
    if (this != &cls)
        this -> type = cls.type;

    return(*this);
}

Animal::~Animal(void)
{
    std::cout << "<Animal> Destructor is called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound: OUIUUUIIIUUU I AM AN ANIMAL"<< std::endl;
}

std::string Animal::getType(void) const{
    return(this -> type);
}


