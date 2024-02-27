
#include "../headers/Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Out of nowhere braaaaain has appeared! PADUMS" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "No more brain. Full chaos now!." << std::endl;
}

Brain::Brain( const Brain& cls )
{
    std::cout << "Copy of the Brain Called" << std::endl;
    *this = cls;
}

Brain& Brain::operator=( const Brain& cls)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if ( this != &cls ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = cls.ideas[i];
        }
    }
    return *this;
}