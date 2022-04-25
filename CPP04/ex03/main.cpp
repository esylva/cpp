/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:29:12 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:29:12 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void) 
{
	// subject
	IMateriaSource* know = new MateriaSource();
	know->learnMateria(new Ice());
	know->learnMateria(new Cure());
	std::cout << std::endl;

	Character* mage = new Character("Mage");
	AMateria* tmp;
	tmp = know->createMateria("ice");
	mage->equip(tmp);
	tmp = know->createMateria("cure");
	mage->equip(tmp);
	std::cout << std::endl;

	ICharacter* dummy = new Character();
	mage->use(0, *dummy);
	mage->use(1, *dummy);
	std::cout << std::endl;


	// deep copy MateriaSource
	std::cout << "--- deep copy MateriaSource ---" << std::endl;

	MateriaSource* know2 = new MateriaSource();
	know2->learnMateria(new Ice());
	know2->learnMateria(new Cure());
	MateriaSource* know_copy = new MateriaSource(*know2);
	delete know2;
	std::cout << std::endl;

	// full inventory and unequip
	std::cout << "--- full inventory and unequip ---" << std::endl;
	tmp = know_copy->createMateria("ice");
	mage->equip(tmp);
	std::cout << std::endl;

	AMateria *last_item = know_copy->createMateria("cure");
	mage->equip(last_item);
	std::cout << std::endl;

	mage->equip(tmp);
	std::cout << std::endl;

	mage->unequip(3);
	std::cout << std::endl;

	delete last_item;

	// deep copy Character
	std::cout << "--- deep copy Character ---" << std::endl;

	Character* mage_copy = new Character(*mage);
	delete mage;
	std::cout << std::endl;

	mage_copy->use(0, *dummy);
	mage_copy->use(1, *dummy);
	// empty
	std::cout << "--- try to use empty ---" << std::endl;
	mage_copy->use(3, *dummy);
	std::cout << std::endl;

	// materia that does not exist
	std::cout << "--- try to create other type of materia ---" << std::endl;
	tmp = know->createMateria("does_not_exist");
	std::cout << "--- And now create ice ---" << std::endl;
	tmp = know->createMateria("ice");
	std::cout << std::endl;

	mage_copy->equip(tmp);
	mage_copy->use(3, *dummy);
	std::cout << std::endl;

	// delete objects
	delete dummy;
	delete mage_copy;
	delete know;
	delete know_copy;
	return (0);
}
