/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:40:53 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (false);
	}
	if (!argv[0] || !argv[1] || !argv[2] || !argv[3])
		return (false);
	if (std::string(argv[1]).empty() || std::string(argv[2]).empty())
	{
		std::cout << "The first and second arguments should not be empty" << std::endl;
		return (false);
	}
	return (true);
}

bool	read_file(std::ifstream &filein, std::string &text)
{
	std::string	line;

	text.clear();
	std::getline(filein, line);
	text += line;
	while (!filein.eof())
	{
		text += '\n';
		std::getline(filein, line);
		text += line;
	}
	return (true);
}

bool	replace(const std::string &path, std::string &text,
				const std::string &search_str, const std::string &replace_str)
{
	std::string		fout_path(path + ".replace");
	std::ofstream	fout(fout_path);
	int				pos(0);

	if (!fout.is_open())
	{
		std::cout << "Can't open file : " << fout_path << std::endl;
		return (false);
	}
	while ((pos = text.find(search_str, pos)) != -1)
	{
		text.erase(pos, search_str.size());
		text.insert(pos, replace_str);
		pos += replace_str.size();
	}
	fout << text;
	fout.close();
	return (true);
}

int	main(int argc, char **argv)
{
	if (!check_args(argc, argv))
		return (1);

	std::ifstream	filein;
	std::string		text;

	filein.open(argv[1]);
	if (!filein.is_open())
	{
		std::cout << "Can't open file : " << argv[1] << std::endl;
		return (1);
	}
	if (!read_file(filein, text))
		return (1);
	if (!replace(std::string(argv[1]), text, std::string(argv[2]), std::string(argv[3])))
	{
		filein.close();
		return (1);
	}
	filein.close();
	return (0);
}

