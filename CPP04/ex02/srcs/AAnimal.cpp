#include "../headers/AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type) {
    std::cout << "<AAnimal> 🐾 constructor called with the type" << type << " assigned."<< std::endl;
}

AAnimal::AAnimal(const AAnimal& cls)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cls;
}

AAnimal &AAnimal::operator=(const AAnimal &cls)
{
    std::cout << "Assignment operator is called" << std::endl;
    if (this != &cls)
        this -> type = cls.type;

    return(*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << "<AAnimal> Destructor is called" << std::endl;
}

void AAnimal::makeSound(void) const
{
    std::cout << "AAnimal sound: OUIUUUIIIUUU I AM AN AAnimal"<< std::endl;
}

std::string AAnimal::getType(void) const{
    return(this -> type);
}


