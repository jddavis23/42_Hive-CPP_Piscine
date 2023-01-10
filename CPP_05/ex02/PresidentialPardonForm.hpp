/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:29:33 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 12:21:53 by jdavis           ###   ########.fr       */
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
	class G2 : public std::exception
	{
		public:
		virtual const char * what () const throw ()
		{
			return "Could not execute";
		}
	};
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &a);
	PresidentialPardonForm & operator = (PresidentialPardonForm &a);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};

#endif