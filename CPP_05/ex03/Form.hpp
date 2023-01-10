/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:49:12 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 14:44:27 by jeffdavis        ###   ########.fr       */
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
		Form(std::string str,int sig, int exec);
		Form(const Form &a);
		Form & operator = (const Form &a);
		~Form();
		std::string getName() const;
		bool getSign() const;
		int getReGrade() const;
		int getExGrade() const;
		void  beSigned(Bureaucrat const & a);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class G2 : public std::exception
		{
			public:
			virtual const char * what () const throw ()
			{
				return " Could not execute ";
			}
		};
			
};

std::ostream &operator << (std::ostream & ostr, Form & n);

#endif
