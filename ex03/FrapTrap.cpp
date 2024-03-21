#include "FragTrap.hpp"

FragTrap::FragTrap() {}
FragTrap::~FragTrap() {}

FragTrap::FragTrap(std::string name)
{
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " want's to high five" << std::endl;
}
