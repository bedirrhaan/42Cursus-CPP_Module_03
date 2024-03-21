#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name)
{
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap()
{

}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if(getHitPoints() and getEnergyPoints())
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target
        << " causing " << getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
}
