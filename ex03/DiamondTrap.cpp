#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {}
DiamondTrap::~DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),FragTrap(name), ScavTrap(name)
{
    setName(name);
    ClapTrap::setName(name + "_clap_name");
    setHitPoints(FragTrap::getHitPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    *this = copy;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        FragTrap::operator=(copy),
        ScavTrap::operator=(copy);
        name = copy.name;
    }
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name: " << getName() << " and ClapTrap Name: " << ClapTrap::getName() << std::endl;
}
