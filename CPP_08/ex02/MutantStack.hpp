/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:27:18 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/19 16:03:04 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    public:
    typedef typename Container::iterator iterator;

    iterator begin()
    {
        return (this->c.begin());
    };
    iterator end()
    {
        return (this->c.end());
    };
    
};

#endif