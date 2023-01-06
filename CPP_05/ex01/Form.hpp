/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:49:12 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 17:46:37 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int reGrade;
		const int exGrade;
	public:
		Form(std::string str, int grade);
		Form(const Form &a);
		Form & operator = (const Form &a);
		~Form();
		std::string getName();
		bool getSign();
		int getReGrade();
		int getExGrade();
		void  beSigned(Bureaucrat & a);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return "grade too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return "grade too low";
				}
		};
			
};

std::ostream &operator << (std::ostream & ostr, Form & n);

#endif
