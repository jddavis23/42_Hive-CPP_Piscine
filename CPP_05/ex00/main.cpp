/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:09 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 16:32:01 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	first("jeff", 2);
	std::cout << first << std::endl;
	Bureaucrat	second("school", 0);
	std::cout << second << std::endl;

	//first.incGrade();
	//first.incGrade();
	//second.decGrade();
	return (0);
};
