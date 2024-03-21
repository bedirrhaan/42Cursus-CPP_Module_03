#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap&    operator=(const DiamondTrap& copy);
        ~DiamondTrap();

        using ScavTrap::attack;
        void    whoAmI(void);
};

#endif
