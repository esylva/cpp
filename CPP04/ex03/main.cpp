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
	std::cout << "--------------------Example from subject--------------------" << std::endl;

	const Animal*	cat = new Cat();
	cat->makeSound();
	std::cout << std::endl;

	const Animal*	dog = new Dog();
	dog->makeSound();
	std::cout << std::endl;

	// const Animal*	animal = new Animal();
	std::cout << std::endl;

	delete	cat;
	std::cout << std::endl;

	delete	dog;
	std::cout << std::endl;

	// delete	animal;
	std::cout << std::endl;

	std::cout << "---------------------Stak example--------------------" << std::endl;

	Cat	stack_cat;
	stack_cat.makeSound();
	std::cout << std::endl;

	Cat	operator_cat = stack_cat;
	std::cout << std::endl;

	Cat	copy_cat(stack_cat);
	std::cout << std::endl;

	Dog	stack_dog;
	stack_dog.makeSound();
	std::cout << std::endl;

	Dog	operator_dog = stack_dog;
	std::cout << std::endl;

	Dog	copy_dog(stack_dog);
	std::cout << std::endl;

	std::cout << "---------------------Array of 10 animals--------------------" << std::endl;

	int		len = 10;
	int		k = 0;
	Animal	*tab[len];

	while (k < (len / 2))
	{
		tab[k] = new Dog();
		k++;
	}
	std::cout << std::endl << k << " " << tab[k - 1]->getType() << "s created" << std::endl << std::endl;
	while (k < len)
	{
		tab[k] = new Cat();
		k++;
	}
	std::cout << std::endl << k / 2 << " " << tab[k - 1]->getType() << "s created" << std::endl << std::endl;
	while (--k >= 0)
		delete tab[k];
	return (0);

}
