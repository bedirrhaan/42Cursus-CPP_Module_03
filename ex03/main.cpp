#include <iostream>

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Dia");
	std::cout << std::endl;

	DiamondTrap b("Mond");
	std::cout << std::endl;

	DiamondTrap c(a);
	std::cout << std::endl;

    std::cout << "Name= " << a.getName() << " Attack P: "<<a.getAttackDamage()
        << " Energy P: "<< a.getEnergyPoints() << " Hit P:" << a.getHitPoints() << std::endl << std::endl;
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.attack("MARVIN");
	b.whoAmI();
	b.attack("ARTHUR");
	c.whoAmI();
	std::cout << std::endl;
	return (0);
}
