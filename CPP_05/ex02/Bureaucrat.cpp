/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:05:37 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 12:20:43 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	//this->name = "";
};

Bureaucrat::Bureaucrat(std::string const &str, int val) : name(str)
{
	try
	{
		//setName(&str);
		setGrade(val);
	}
	catch (std::exception & a)
	{
		std::cout << a.what() << std::endl;
	}
};

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	try
	{
		//setName(a.name);
		setGrade(a.grade);
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &a)
{
	if (this != &a)
	{
		try
		{
			//this->name = a.name;
			this->setGrade(a.grade);
		}
		catch (std::exception &a )
		{
			std::cout << a.what() << std::endl;
		}
	}
	return *this;
};

Bureaucrat::~Bureaucrat()
{

};

/*void	Bureaucrat::setName(std::string const &str)
{
	name(str);
};*/

void	Bureaucrat::setGrade(int val)
{
	if (val < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (val > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = val;
};

std::string Bureaucrat::getName()
{
	return name;
};

int Bureaucrat::getGrade()
{
	return grade;
};

void	Bureaucrat::incGrade()
{
	try
	{
		if (grade == 1)
			throw Bureaucrat::GradeTooHighException();
		--grade;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

void	Bureaucrat::decGrade()
{
	try
	{
		if (grade == 150)
			throw Bureaucrat::GradeTooLowException();
		++grade;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
};

void	Bureaucrat::signForm(Form &s)
{
	try
	{
		s.beSigned(*this);
		if (s.getReGrade() <= getGrade())
		{
			std::cout << this->getName() << " signed " << s.getName();
		}
		else
		{
			std::cout << this->getName() << " couldn't sign " << s.getName() << " because it did not have a high enough grade";
			std::cout << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
};

// void	Bureaucrat::executeForm(Form const & form)
// {
	
// };

std::ostream &operator<<(std::ostream & ostr, Bureaucrat & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade() << std::endl;
	return ostr;
};
