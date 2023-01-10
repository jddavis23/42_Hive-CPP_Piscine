/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:09 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 12:19:42 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	first("jeff", 2);
	std::cout << first << std::endl;
	PresidentialPardonForm tip("eps");
//	Bureaucrat	second("school", 0);
//	first.incGrade();
//	first.incGrade();
	return (0);
};
