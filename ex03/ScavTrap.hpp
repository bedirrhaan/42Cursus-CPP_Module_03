#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap&   operator=(const ScavTrap& copy);
        ~ScavTrap();

        void    guardGate(void);
        void    attack(const std::string& target);
};

#endif
