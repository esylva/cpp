#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): _name(name), _hp(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap " << _name << " greets you!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy): _name(cpy._name), _hp(cpy._hp), _energy(cpy._energy), _damage(cpy._damage) {}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " returns home." << std::endl;
}

ClapTrap & ClapTrap::operator =(const ClapTrap &cpy)
{
	_name = cpy._name;
	_hp = cpy._hp;
	_energy = cpy._energy;
	_damage = cpy._damage;
	return *this;
}

std::string	ClapTrap::getName(void) const {
	return _name;
}

int		ClapTrap::getAtackDamage( void ) const {
	return _damage;
}

int		ClapTrap::getEnergyPoints( void ) const {
	return _energy;
}

int		ClapTrap::getHitPoints( void ) const {
	return _hp;
}

void	ClapTrap::setAtackDamage( int atackDamage ) {
	this->_damage = atackDamage;
}

void	ClapTrap::setEnergyPoints( int energy ) {
	this->_energy = energy;
}
void	ClapTrap::setHitPoints(  int hp ) {
	this->_hp = hp;
}

// internal functions

void ClapTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0 || getHitPoints() == 0) {
		std::cout << "I can't attack, because I'm so damn tired" << std::endl;	
	}
	else {
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing "  << _damage << " points of damage!" << std::endl;
		setEnergyPoints(this->_energy - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > amount){
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
		_hp -= amount;
		if (_hp < 0){
			_hp = 0;
		std::cout << "God blessed me! I'm still alive, but i can't do something" << std::endl;			
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() > 0) {
		std::cout << "ClapTrap " << _name << " healed " << amount << " hit points" << std::endl;
		if (_hp + amount >= _hp)
		{
			std::cout << "ClapTrap " << _name << "> I AM FULL OF HEALTH" << std::endl;
			_hp = (unsigned)(-1);
		}
		else {
			std::cout << "ClapTrap " << _name << " thanks God, I'm back to " << amount << std::endl;
			setHitPoints(this->_hp + amount);
			std::cout << "    now I'm on " << _hp << " from death\n";
			setEnergyPoints(this->_energy - 1);
		}
	}
	else {
		std::cout << "I can't healing, because I'm so damn tired" << std::endl;
	}
}
// external functions

std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap) {
	o
		<< "[STATUS] "
		<< clap_trap.getName()
		<< " - Hit Points:"
		<< clap_trap.getHitPoints()
		<< " Energy Points:"
		<< clap_trap.getEnergyPoints()
		<< " Atack Damage:"
		<< clap_trap.getAtackDamage()
		<< std::endl;
	return (o);
}
