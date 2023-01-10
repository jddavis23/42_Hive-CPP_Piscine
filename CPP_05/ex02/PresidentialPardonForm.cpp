/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:38:19 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 12:18:03 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &a)
{
	*this = a;
};

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm &a)
{
	if (this != &a)
	{
		*this = a;
	}
	return *this;
};

PresidentialPardonForm::~PresidentialPardonForm()
{

};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
		if (!this->getSign() || executor.getGrade() <= this->getExGrade())
			throw PresidentialPardonForm::G2();
};
