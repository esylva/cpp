/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/29 20:55:09 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	int		value;
	char 	 c;
};

uintptr_t serialize(Data* ptr) {
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return(reinterpret_cast<Data *>(raw));
}

int main(void) {
    Data        data;
    uintptr_t   data_serialized;
    Data        *data_deserialized;

    data.value = 42;
	data.c = 'S';
    std::cout << "Data value: " << data.value << std::endl;
	std::cout << "Data char: " << data.c << std::endl;
	std::cout << "Data address: " << &data << std::endl;
    data_serialized = serialize(&data);
    std::cout << "Data serialized uintptr_t: " << data_serialized << std::endl;
    data_deserialized = deserialize(data_serialized);
    std::cout << "Data deserialized address: " << data_deserialized << std::endl;
	std::cout << "Data value: " << data.value << std::endl;
	std::cout << "Data char: " << data.c << std::endl;
	data.value = 24;
	data.c = 'K';
	std::cout << "Data value: " << data.value << std::endl;
	std::cout << "Data char: " << data.c << std::endl;
    return 0;
}
