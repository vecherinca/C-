#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
    private:
        Brain *brain;
    public:
        Cat& operator=( const Cat& csl);
        Cat( const Cat& cls );
        Cat( void );
        ~Cat( void );
        void makeSound() const;

};
#endif