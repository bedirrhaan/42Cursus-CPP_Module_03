#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name)
{
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}

// Assigment Operator Overloading
ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy)
    {
        this->name = copy.getName();
        this->hitPoints = copy.getHitPoints();
        this->energyPoints = copy.getEnergyPoints();
        this->attackDamage = copy.getAttackDamage();
    }
    return (*this);    
}

// Destructor
ClapTrap::~ClapTrap(void)
{

}
// Getters
void    ClapTrap::setName(const std::string name)
{
    this->name = name;
}

void    ClapTrap::setHitPoints(const int hitPoints)
{
    this->hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints(const int energyPoints)
{
    this->energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage(const int attackDamage)
{
    this->attackDamage = attackDamage;
}

// Setters

std::string ClapTrap::getName(void) const
{
    return (name);
}

int         ClapTrap::getHitPoints(void) const
{
    return (hitPoints);
}

int         ClapTrap::getEnergyPoints(void) const
{
    return (energyPoints);
}

int         ClapTrap::getAttackDamage(void) const
{
    return (attackDamage);
}

void    ClapTrap::attack(const std::string& target)
{
    if (!getHitPoints() or !getEnergyPoints() or !getAttackDamage())
    {
        std::cout << getName() << " failed to attack " << target << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName() << " attacks " << target << " , causing " << getAttackDamage() << " points of damage!" << std::endl;
    
    setEnergyPoints(getEnergyPoints() - 1);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() and getEnergyPoints())
    {
        std::cout << "ClapTrap" << getName() << " takes " << amount << " points of damage!" << std::endl;
        setHitPoints(getHitPoints() - amount);
        if (getHitPoints() <= 0)
            std::cout << getName() << " is dead" << std::endl;
    }   
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() and getEnergyPoints())
    {   
        std::cout << "ClapTrap" << getName() << " get health " << amount << " points!" << std::endl;
        setHitPoints(getHitPoints() + amount);
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

