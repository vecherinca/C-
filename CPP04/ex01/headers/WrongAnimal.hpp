#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
class WrongAnimal {

    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &cls);
        WrongAnimal &operator=(const WrongAnimal &to_be_copied_from);
        ~WrongAnimal(void);
        void makeSound(void) const;
        std::string getType(void) const;

};

#endif