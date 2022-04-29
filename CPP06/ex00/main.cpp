/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/29 20:44:19 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string         value = argv[1];
	double 		        d_value = 0;
	std::stringstream   tmp;
	float 		        f_value = 0;

// cast to double
	if(value.length() == 1 && !std::isdigit(value[0])){
        d_value = std::stod(argv[1]);

    }
	else{
    	d_value = atof(argv[1]);
    }

// checking and printing char
	if (std::isnan(d_value) || std::isinf(d_value) || d_value < 0 || d_value > 127)
		std::cout << "char: impossible" << std::endl;
	else if((d_value > 31 && d_value < 127))
		std::cout << "char: " << static_cast<char>(d_value) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

// checking and printing int
	if (std::isnan(d_value) || std::isinf(d_value) || d_value > std::numeric_limits<int>::max() || d_value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d_value) << std::endl;

// printing float
	f_value = static_cast<float>(d_value);
	tmp << "float: " << f_value;
	value = tmp.str();
	if (!(std::isnan(f_value) || std::isinf(f_value)) && value.find('.') == std::string::npos)
		tmp << ".0";
	tmp << "f" << std::endl;
	std::cout << tmp.str();
	tmp.str("");
	tmp.clear();

// printing double
	tmp << "double: " << d_value;
	value = tmp.str();
	if (!(std::isnan(d_value) || std::isinf(d_value)) && value.find('.') == std::string::npos)
		tmp << ".0";
	std::cout << tmp.str() << std::endl;
	return 0;
}
