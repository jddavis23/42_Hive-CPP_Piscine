/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:03:32 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 15:31:22 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string> 


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
			//GradeTooLowException();
			//~GradeTooLowException();
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
		//void		setName(std::string const &str);
		std::string getName();
		void		setGrade(int num);
		int 		getGrade();
		void		incGrade();
		void		decGrade();
		void	signForm();
};

std::ostream &operator << (std::ostream &ostr, Bureaucrat & instance);

#endif
