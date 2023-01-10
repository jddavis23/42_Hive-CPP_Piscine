/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:03:32 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 11:57:18 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;


class Bureaucrat
{
	protected:
		const std::string name;
		int		grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
			//GradeTooHighException();
			//~GradeTooHighException();
			virtual const char * what () const throw ()
			{
				return "grade too high";
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char * what () const throw ()
			{
				return "grade too low";
			}
		};
		Bureaucrat();
		Bureaucrat(std::string const &str, int val);
		Bureaucrat(const Bureaucrat &a);
		Bureaucrat & operator = (const Bureaucrat &a);
		~Bureaucrat();
		std::string getName();
		void		setGrade(int num);
		int 		getGrade();
		void		incGrade();
		void		decGrade();
		void		signForm(Form &s);
		void		executeForm(Form const & form);
};

std::ostream &operator << (std::ostream &ostr, Bureaucrat & instance);

#endif
