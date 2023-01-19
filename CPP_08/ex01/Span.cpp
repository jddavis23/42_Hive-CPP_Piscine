/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:21:11 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/19 12:26:23 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->sz = N;
};

Span::Span(const Span &a)
{
    unsigned long i;

    i = 0;
    this->sz = a.sz;
    while (i < a.v.size())
    {
        this->v.push_back(a.v[i]);
        ++i;
    }
};

Span & Span::operator = (const Span &a)
{
    if (this != &a)
    {
        unsigned long i;

        i = 0;
        this->sz = a.sz;
        while (i < a.v.size())
        {
            this->v.push_back(a.v[i]);
            ++i;
        }
    }
    return *this;
};

Span::~Span()
{
};

void Span::addNumber(int N)
{
    try
    {
        if (this->sz == this->v.size())
            throw Span::Full();
        this->v.push_back(N);
    }
    catch (std::exception &a)
    {
        std::cout << a.what();
    }
};

int Span::shortestSpan()
{
    try
    {
        int result;
        unsigned long i;
        //std::vector<int>::iterator it;

        i = 0;
        result = INT_MAX;
        if (this->v.size() <= 1)
            throw Span::Small();
        std::sort(v.begin(), v.end());
        while (i < v.size())
        {
            if (abs(v[i] - v[i + 1]) < result && i + 1 < v.size())
                result = abs(v[i] - v[i + 1]);
            ++i;
        }
         return result;
    }
    catch (std::exception &a)
    {
        std::cout << a.what();
    }
    return 0;
};

int Span::longestSpan()
{
    try
    {
        if (this->v.size() <= 1)
            throw Span::Small();
        return *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    }
    catch (std::exception &a)
    {
        std::cout << a.what();
    }
    return 0;
};

void Span::addManyNumbers(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
    
};
