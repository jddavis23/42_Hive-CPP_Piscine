/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:06:56 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/14 13:30:24 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(std::string str);
	Animal(const Animal &a);
	Animal & operator = (const Animal &a);
	virtual ~Animal();
	void	makeSound() const;
	void	setType(std::string name);
	std::string	getType() const;
};
#endif 