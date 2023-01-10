/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:48:08 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/10 16:27:48 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"


Intern::~Intern()
{
};

Form * makeShrub(std::string target)
{
    return new PresidentialPardonForm(target);
    //return new ShrubberyCreationForm(target);
};

Form * makeRob(std::string target)
{
    return new PresidentialPardonForm(target);
};

Form * makePres(std::string target)
{
    return new PresidentialPardonForm(target);
};

Form * Intern::makeForm(std::string formName, std::string target)
{
    std::string arr[3];
    Form *form = NULL;
    fptr j[3] = {&makeShrub, &makeRob, &makePres};
    int i;
    arr[0] = "ShrubberyCreation";
    arr[1] = "RobotomyRequest";
    arr[2] = "PresidentialPardonForm";

    i = 0;
    while (i < 3)
    {
        if (formName == arr[i])
        {
            std::cout << "Intern created " << arr[i] << std::endl;
            return j[i](target);
        }
        ++i;
    }
    return form;
};