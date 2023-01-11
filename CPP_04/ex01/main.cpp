/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:41:00 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/14 16:23:33 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	Animal* arr[4] = { new Dog(), new Cat(), new Cat(), new Cat()};
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	int k;

	k = 0;
	while (k < 4)
	{
		delete arr[k++];
	}
	return 0;
}