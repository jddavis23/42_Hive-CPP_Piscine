/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:08 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/14 13:27:23 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal def cons" << std::endl;
};

Animal::Animal(std::string str)
{
	this->setType(str);
	std::cout << str << " nDef cons" << std::endl;
};

Animal::Animal(const Animal &a)
{
	type = a.type;
};

Animal &Animal::operator = (const Animal &a)
{
	if (this != &a)
	{
		type = a.type;
	}
	return (*this);
};

Animal::~Animal()
{
	std::cout << "Animal def decons" << std::endl;
};

void	Animal::makeSound() const
{
	if (this->getType() == "Dog")
	{
		std::cout << "woof woof" <<  std::endl;
	}
	else if (this->getType() == "Cat")
		std::cout << "pur pur" <<  std::endl;
};

void	Animal::setType(std::string name)
{
	type = name;
};

std::string	Animal::getType() const
{
	return (type);
};