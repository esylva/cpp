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

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (){
	std::cout << "--------------------ANIMAL--------------------" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

	i->makeSound(); 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "-----------------WRONG-ANIMAL-----------------" << std::endl;
	const WrongAnimal	*w_meta = new WrongAnimal();
	const WrongAnimal	*w_cat = new WrongCat();
	const WrongCat		*wrong_cat = new WrongCat();

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << w_cat->get_type() << " " << std::endl;

	std::cout << *w_cat << " " << std::endl;

	w_cat->makeSound();
	w_meta->makeSound();
	wrong_cat->makeSound();

	std::cout << "----------------------------------------------" << std::endl;

	delete w_meta;
	delete w_cat;
	delete wrong_cat;

	return 0;
	
}

