#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

#include "iostream"
class WrongCat: public WrongAnimal
{
private:

public:

    WrongCat( void );
    ~WrongCat( void );
    void makeSound() const;

};
#endif
