#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string    name;
        int            hitPoints;
        int            energyPoints;
        int            attackDamage;
    public:

        // Constructor && Destructor
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& copy);
        ~ClapTrap();
        // Setters
        void    setName(const std::string name);
        void    setHitPoints(const int hitPoints);
        void    setEnergyPoints(const int energyPoints);
        void    setAttackDamage(const int attackDamage);

        // Getters
        std::string getName(void) const;
        int         getHitPoints(void) const;
        int         getEnergyPoints(void) const;
        int         getAttackDamage(void) const;

        // Member Functions
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif