/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:18:36 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/04 13:13:51 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	checks if the value in the two classes are the same or not	*/
static void	equal_to_operator()
{
	Fixed c;
	Fixed d;

	std::cout << "\nc : 0 , d : 0\nFirst check: ";
	if (c == d)
		std::cout << "c and d are the same\n";
	if (c != d)
		std::cout << "c and d are not the same\n";
	d.setRawBits(45);
	std::cout << "c : 0 , d : 45\nSecond check: ";
	if (c == d)
		std::cout << "c and d are the same\n";
	if (c != d)
		std::cout << "c and d are not the same\n";
}

/*	checks if the value in the two classes are bigger than the other	*/
static void	bigger_or_less_operator()
{
	Fixed c;
	Fixed d;

	std::cout << "\nc : 0 , d : 0\nFirst check: ";
	if (c > d)
		std::cout << "c is bigger than d\n";
	if (c >= d)
		std::cout << "c is bigger or equal d\n";
	if (c < d)
		std::cout << "c is smaller than d\n";
	if (c <= d)
		std::cout << "c is smaller or equal d\n";
	d.setRawBits(45);
	std::cout << "c : 0 , d : 45\nSecond check: ";
	if (c > d)
		std::cout << "c is bigger than d\n";
	if (c >= d)
		std::cout << "c is bigger or equal d\n";
	if (c < d)
		std::cout << "c is smaller than d\n";
	if (c <= d)
		std::cout << "c is smaller or equal d\n";
}

/*	arithmetic operators	*/
static void	arithmetic_operators_plus(void)
{
	Fixed a (10);
	Fixed b (25);
	Fixed c;

	c = a + b;
	std::cout << "\n" << a << " + " << b <<
		" == " << c << "\n";

}

static void	arithmetic_operators_minus(void)
{
	Fixed a (10);
	Fixed b (25);
	Fixed c;

	c = a - b;
	std::cout << "\n" << a << " - " << b <<
		" == " << c << "\n";

}

static void	arithmetic_operators_div(void)
{
	Fixed a (10);
	Fixed b (25);
	Fixed c;

	c = a / b;
	std::cout << "\n" << a << " / " << b <<
		" == " << c << "\n";

}

static void	arithmetic_operators_multi(void)
{
	Fixed a (10);
	Fixed b (25);
	Fixed c;

	c = a * b;
	std::cout << "\n" << a << " * " << b <<
		" == " << c << "\n";

}

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "print increment\n" << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	/*	print min and max	*/
	//std::cout << "\nprint max: " << Fixed::max( a, b ) << std::endl;
	//std::cout << "print min: " << Fixed::min( a, b ) << std::endl;

	/*	print increment	*/
	std::cout << "\nprint decrement\n" << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	/*	print min and max	*/
	//std::cout << "\nprint max: " << Fixed::max( a, b ) << std::endl;
	//std::cout << "print min: " << Fixed::min( a, b ) << std::endl;

	/*	6 comparison operators: >, <, >=, <=, == and !=	*/
	equal_to_operator();
	bigger_or_less_operator();
	
	/*	4 arithmetic operators	*/
	arithmetic_operators_plus();
	arithmetic_operators_minus();
	arithmetic_operators_div();
	arithmetic_operators_multi();
	return 0;
}