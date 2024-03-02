#include "../headers/WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
    std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "<WrongAnimal> constructor called with the type" << type << "assigned."<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cls)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cls;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cls)
{
    std::cout << "Assignment operator is called" << std::endl;
    if (this != &cls)
        this -> type = cls.type;

    return(*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "<WrongAnimal> Destructor is called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound: OUIUUUIIIUUU I AM AN ANIMAL"<< std::endl;
}

std::string WrongAnimal::getType(void) const{
    return(this -> type);
}

