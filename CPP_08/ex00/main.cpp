/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:01:39 by jeffdavis         #+#    #+#             */
/*   Updated: 2023/01/18 12:54:38 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
    std::vector<int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(10);
    v.push_back(5);
    v.push_back(8);


    if (::easyfind(v, 5))
        std::cout << "found\n";
    else
        std::cout << "Not\n";
    return 0;
}