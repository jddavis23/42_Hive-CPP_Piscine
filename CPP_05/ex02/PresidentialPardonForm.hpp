/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:29:33 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/09 12:03:54 by jdavis           ###   ########.fr       */
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
	PresidentialPardonForm(PresidentialPardonForm &a);
	PresidentialPardonForm & operator = (PresidentialPardonForm &a);
	~PresidentialPardonForm();
};

#endif