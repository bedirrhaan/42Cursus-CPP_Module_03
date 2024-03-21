#include "ScavTrap.hpp"
#include <iostream>


int main()
{
	ClapTrap ct1("Marvin");
	ScavTrap ct2("Arthur");
    ScavTrap ct3 = ct2;

	ct2.guardGate();
	ct2.beRepaired(5);

	ct2.takeDamage(ct1.getAttackDamage());
	ct2.guardGate();

	ct2.ClapTrap::attack("Marvin");

	std::cout << "Name = " << ct2.getName() << " Attack P : "<< ct2.getAttackDamage()
    	<< " Energy P : "<< ct2.getEnergyPoints() << " Hit P :" << ct2.getHitPoints() << std::endl;

}
