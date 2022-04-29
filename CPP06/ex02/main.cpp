/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/29 17:41:16 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>
#include <typeinfo>
// #include <unistd.h>

// class Base;
// class ClassA;
// class ClassB;
// class ClassC;

class Base {
	public:
		virtual	~Base(){}
};

class ClassA: public Base {
	public:
        ClassA(){
            std::cout << "Class A" << std::endl;
        }
        virtual	~ClassA(){}

};

class ClassB: public Base {
	public:
        ClassB(){
            std::cout << "Class B" << std::endl;
        }
        virtual	~ClassB(){}

};

class ClassC: public Base {
	public:
        ClassC(){
            std::cout << "Class C" << std::endl;
        }
        virtual	~ClassC(){}

};

void identify(Base* p){
    ClassA *cA = dynamic_cast <ClassA *>(p);
    if (cA != NULL) {
        std::cout << "Identify by pointer \"It's an A Class\"" << std::endl;
        return;
    }
    ClassB *cB = dynamic_cast <ClassB *>(p);
    if (cB != NULL) {
        std::cout << "Identify by pointer \"It's a B Class\"" << std::endl;
        return;
    }
    ClassC *cC = dynamic_cast <ClassC *>(p);
    if (cC != NULL) {
        std::cout << "Identify by pointer \"It's a C Class\"" << std::endl;
        return;
    }
    else{
        std::cout << "Identify by pointer \"Class undefined\"" << std::endl;
    }
}


void identify(Base& p) {
    try {
        ClassA cA = dynamic_cast <ClassA &>(p);
        std::cout << "Identify by reference \"It's an A Class\"" << std::endl;
    }
    catch (std::bad_cast &bc){}
    try {
        ClassB cB = dynamic_cast <ClassB &>(p);
        std::cout << "Identify by reference \"It's a B Class\"" << std::endl;
    }
    catch (std::bad_cast &bc){}
    try {
        ClassC cC = dynamic_cast <ClassC &>(p);
        std::cout << "Identify by reference \"It's a C Class\"" << std::endl;
    }
    catch (std::bad_cast &bc){
        std::cout << "Identify by reference \"Class undefined\"" << std::endl;
    }
}

Base*	generate(void){

	int chance = rand();
    std::cout << "Randomly created ";
	// std::cout << chance << std::endl;
    switch (chance % 3) 
    {
        case 0:{
            Base* cA = new ClassA;
            return cA;
        }
        case 1: {
            Base* cB = new ClassB;
            return cB;
        }
        case 2: {
            Base* cC = new ClassC;
            return cC;
        }
	}
    return NULL;
}

int main(){

    Base    *x;

	srand(time(NULL));
    for (int i = 0; i < 6; i++){
	x = generate();
    // usleep(100);
    identify(x);
    identify(*x);
    delete x;
    }

}
