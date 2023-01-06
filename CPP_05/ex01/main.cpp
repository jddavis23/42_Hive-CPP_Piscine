/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:09 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 17:58:16 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	first("jeff", 2);
	std::cout << first << std::endl;
	Form		newform("paper", 10);
   first.signForm(newform);	
	Form		yform("staff", 1);
	first.signForm(yform);
//	Bureaucrat	second("school", 0);
//	first.incGrade();
//	first.incGrade();
	return (0);
};
