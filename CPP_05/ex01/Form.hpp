/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:49:12 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 16:16:34 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{
	private:
		const std::string name;
		bool sign;
		const int reGrade;
		const int exGrade;
	public:
		Form();
		Form(std::string str, bool sign, int grade);
		Form(const Form &a);
		Form(const Form &a);
		~Form();
		std::string getName();
		bool getSign();
		int getReGrade();
		void beSigned(Bureaucrat &a);
		class GradeTooHighException : std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return "grade too high";
				}
		};
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return "grade too low";
				}
		};
			
}

std::ostream &operator << (std::ostream & ostr, Form &new);

#endif
