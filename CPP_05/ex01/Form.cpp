/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:48:36 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/06 15:30:08 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("") {}

Form::Form(std::string str, int grad)
{
	name(str);
	sign = 0;
	try
	{
		if (grad < 1)
			throw Form::GradeTooHighException();
		else if (grad > 150)
			throw Form::GradeTooLowException();
		grade = grad;i
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

Form::Form(const Form  &a)
{
		name(a.name);
		sign = a.sign;
		grade(a.grade);
};

Form::Form(const Form &a)
{
	if (this != &a)
	{
		name(a.name);
		sign = a.sign;
		grade(a.grade);
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

int Form::getGrade()
{
	return grade;
};

void Form::beSigned(Bureaucrat &a)
{
	try
	{
		if (a.grade <= this.grade)
			sign = 1;
		else
			throw Form::GradeTooLowException;

	}
	catch (std::exception &)
	{
		std::cout << a.what() << std::endl;
	}
}
std::ostream &operator << (std::ostream &ostr, Form &new)
{
	ostr << new.name << ", signed = " << new.sign << " grade = " << new.grade;
	return ostr;
};

