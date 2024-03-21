#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct1("Marvin");
	FragTrap ct2("Arthur");
    FragTrap ct3 = ct2;

	ct2.highFivesGuys();
	ct2.beRepaired(5);

	ct2.takeDamage(ct1.getAttackDamage());
	ct2.highFivesGuys();

    std::cout << "Name= " << ct2.getName() << " Attack P: "<<ct2.getAttackDamage()
        << " Energy P: "<< ct2.getEnergyPoints() << " Hit P:" << ct2.getHitPoints() << std::endl;

}
