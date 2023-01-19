/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:00:42 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/19 11:52:47 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> v;
        unsigned int sz;
    public:
        class Full : public std::exception
        {
            virtual const char * what() const throw ()
            {
                return "Elements full\n";
            }
        };
        class Small : public std::exception
        {
            virtual const char * what() const throw ()
            {
                return "Cannot find span\n";
            }
        };
        Span(unsigned int N);
        Span(const Span &a);
        Span & operator = (const Span &a);
        ~Span();
        void addNumber(int N);
        int shortestSpan();
        int longestSpan();
        void addManyNumbers(std::vector<int>::iterator a, std::vector<int>::iterator b);
};

#endif