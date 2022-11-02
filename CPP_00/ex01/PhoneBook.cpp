/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:06:47 by jdavis            #+#    #+#             */
/*   Updated: 2022/10/31 16:40:40 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

void putname(const std::string str);

class PhoneBook
{
	public:
	class Contact
	{
		public:
		std::string FirstName;
		std::string LastName; 
		std::string NickName;
		std::string PhoneNumber;
		std::string Secret;
		std::string number;
	};

	Contact	con[8];
	void PrintCon (int i)
	{
		int j;

		j = 0;
		while (j++ < 10)
			putchar(' ');
		putchar((i - 1) + 48);
		putname(con[i - 1].FirstName);
		putname(con[i - 1].LastName);
		putname(con[i - 1].NickName);
		putchar('\n');
	}
	void allcon(int i)
	{
		std::cout << (con[i - 1].FirstName) << '\n';
		std::cout << con[i - 1].LastName << '\n';
		std::cout << con[i - 1].NickName << '\n';
		std::cout << con[i - 1].PhoneNumber << '\n';
		std::cout << con[i - 1].Secret << '\n';
	}
};
