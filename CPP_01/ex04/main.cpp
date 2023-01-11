/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:37:32 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 16:29:39 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "S1.hpp"
#include "S2.hpp"

int	get_all(std::fstream &write_file, std::fstream &read_file, S1 i, S2 j)
{
	std::string line;
	std::string::size_type	index;
	std::string::size_type found;
	int hold_one;
	int	hold_two;

	hold_one = (i.getS1()).size();
	hold_two = (j.getS2()).size();
	while (getline(read_file, line))
	{
		index = 0;
		while (line[index] != '\0')
		{
			found = line.find(i.getS1(), index);
			while (index < found && line[index] != '\0')
				write_file << line[index++];
			if (line[index] != '\0')
			{
				write_file << j.getS2();
				index += hold_one;
			}
		}
		write_file << "\n";
	}
	write_file.close();
	read_file.close();
	return (0);
}

int main(int argc, char *argv[])
{

	std::fstream read_file;
	std::fstream write_file;
	std::string name;

	name = argv[1];
	if (argc != 4)
	{
		puts("no arguments");
		return (0);
	}
	S1 i = S1(argv[2]);
	S2 j = S2(argv[3]);
	read_file.open(argv[1], std::ios::in);
	if (!read_file)
	{
		puts("Read file wasn't open");
		return (-1);
	}
	name.append(".replace");
	write_file.open((name),  std::ios::out);
	if (!write_file)
	{
		puts("write file didnt open");
		return (-1);
	}
	get_all(write_file, read_file, i, j);
	return 0;
}