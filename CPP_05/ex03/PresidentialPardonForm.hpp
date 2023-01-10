/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:29:33 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 14:44:07 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <ostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
	public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &a);
	PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};

#endif