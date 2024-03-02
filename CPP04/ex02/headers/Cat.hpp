#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat: public AAnimal
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