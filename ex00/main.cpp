#include "ClapTrap.hpp"

int main()
{

    ClapTrap claptrap1("Bedirhan");
    claptrap1.setAttackDamage(25);

    ClapTrap claptrap2(claptrap1);

    ClapTrap claptrap3("Baki");

    claptrap3 = claptrap2;

    claptrap1.attack("Cemil");
    claptrap2.takeDamage(20);

    claptrap2.attack("Lapacino");
    claptrap3.takeDamage(30);

    claptrap3.beRepaired(15);

    std::cout << "1. ClapTrap - Hit Points: " << claptrap1.getHitPoints() << ", Energy Points: " << claptrap1.getEnergyPoints() << ", Attack Points: " << claptrap1.getAttackDamage() << std::endl;

    std::cout << "2. ClapTrap - Hit Points: " << claptrap2.getHitPoints() << ", Energy Points: " << claptrap2.getEnergyPoints() << ", Attack Points: " << claptrap2.getAttackDamage() << std::endl;

    std::cout << "3. ClapTrap - Hit Points: " << claptrap3.getHitPoints() << ", Energy Points: " << claptrap3.getEnergyPoints() << ", Attack Points: " << claptrap3.getAttackDamage() << std::endl;

    return 0;
}
