/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:42:38 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/18 12:58:32 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
#define EASY_HPP

#include <iostream>

template<typename T> int easyfind(T& t, int j)
{
    typename T::iterator it;
    
    for (it = t.begin(); it != t.end(); ++it)
    {
        if (*it == j)
            return 1;
    }
    return 0;
};

#endif