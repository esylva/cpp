#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	cleric ("Futher Tuck");
	ClapTrap	rougue ("Robin Hood");

	std::cout << std::endl;
	rougue.setAtackDamage(5);
	std::cout << std::endl;
	
	rougue.attack(cleric.getName());
	std::cout << rougue << std::endl;
	cleric .takeDamage(5);
	std::cout << cleric << std::endl;
	cleric .beRepaired(5);
	std::cout << std::endl;

	rougue.setAtackDamage(10);
	std::cout << std::endl;

	rougue.attack(cleric .getName());
	std::cout << std::endl;
	cleric .takeDamage(10);
	std::cout << std::endl;
	rougue.attack(cleric .getName());
	std::cout << std::endl;
	cleric .takeDamage(10);
	std::cout << std::endl;
	std::cout << rougue << std::endl;
	std::cout << cleric << std::endl;
	return (0);
}
