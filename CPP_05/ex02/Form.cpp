/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:48:36 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/09 11:56:23 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string str, int sig, int exec) : name(str), reGrade(sig), exGrade(exec)
{
	sign = 0;
	try
	{
		if (reGrade < 1 || exGrade < 1)
			throw Form::GradeTooHighException();
		else if (reGrade > 150 || exGrade > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

Form::Form(const Form  &a) : reGrade(0), exGrade(0)
{
		//name(a.name);
		sign = a.sign;
		//reGrade = a.reGrade;
		//exGrade = a.exGrade;
		*this = a;
};

Form & Form::operator = (const Form &a)
{
	if (this != &a)
	{
		//name(a.name);
		sign = a.sign;
		//reGrade = a.reGrade;
		//exGrade = a.exGrade;
	}
	return *this;
};

Form::~Form()
{

};

std::string Form::getName()
{
	return name;
};

bool Form::getSign()
{
	return sign;
};

int Form::getReGrade()
{
	return reGrade;
};

int	Form::getExGrade()
{
	return exGrade;
};

void Form::beSigned(Bureaucrat &a)
{
	try
	{
		if (a.getGrade() <= this->reGrade)
			sign = 1;
		else
			throw Form::GradeTooLowException();

	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

std::ostream &operator << (std::ostream &ostr, Form & n)
{
	ostr << n.getName() << ", signed = " << n.getSign() << " sign grade = " << n.getReGrade() << " execution grade = " << n.getExGrade();
	return ostr;
};

