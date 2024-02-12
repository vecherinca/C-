#include "ClapTrap.hpp"

int main() {
    // Creating ClapTrap instances
    ClapTrap clapTrap1("CL4P-TP");
    ClapTrap clapTrap2("FR4G-TP");

    std::cout << "Starting battle..." << std::endl;

    // ClapTrap1 attacks ClapTrap2
    clapTrap1.attack("FR4G-TP");
    // ClapTrap2 takes damage
    clapTrap2.takeDamage(2);

    // ClapTrap2 retaliates
    clapTrap2.attack("CL4P-TP");
    // ClapTrap1 takes damage
    clapTrap1.takeDamage(3);

    // Both ClapTraps attempt to repair themselves
    clapTrap1.beRepaired(5);
    clapTrap2.beRepaired(5);

    return 0;
}
