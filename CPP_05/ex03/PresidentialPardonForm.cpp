/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:38:19 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 14:45:15 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 145, 137) {}

/*PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
	*this = a;
};*/

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a)
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
	if (!this->getSign() || executor.getGrade() > this->getExGrade())
		throw Form::G2();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
};
