/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:48:46 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/10 16:17:21 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Form;

class Intern
{
    public:
    ~Intern();
    Form * makeForm(std::string formName, std::string target);
    // Form * makeShrub(std::string target);
    // Form * makeRob(std::string target);
    // Form * makePres(std::string target);
    typedef Form * (*fptr)(std::string target);
    
};

#endif