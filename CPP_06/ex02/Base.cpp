/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:21:03 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/13 12:17:52 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
};

Base * generate(void)
{
	srand((unsigned) time(NULL));
	int random = rand();
	char arr[3] = {'A', 'B', 'C'};

	switch (arr[random % 3])
	{
		case 'A':
		{
			return new A;
		}
		case 'B':
			return new B;
		case 'C':
			return new C;
	}
	return NULL;
};

void identify(Base* p)
{
	std::cout << "Derived class is ";
	if (dynamic_cast<A*>(p))
	{
        std::cout << "A" << std::endl;
    }
	else if (dynamic_cast<B*>(p))
	{
 		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
 		std::cout << "C" << std::endl;
	}
	else
 		std::cout << "does not exist" << std::endl;
};

 void identify(Base& p)
 {
	std::cout << "Derived class is ";
	if (dynamic_cast<A*>(&p))
	{
        std::cout << "A" << std::endl;
    }
	else if (dynamic_cast<B*>(&p))
	{
 		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(&p))
	{
 		std::cout << "C" << std::endl;
	}
	else
 		std::cout << "does not exist" << std::endl;
 };
