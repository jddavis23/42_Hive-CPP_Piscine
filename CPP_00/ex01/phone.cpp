/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:01:06 by jdavis            #+#    #+#             */
/*   Updated: 2022/10/31 17:28:51 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.cpp"

void putname(const std::string str)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	len = 10 - str.size();
	putchar('|');
	while (j < len && len < 10)
	{
		putchar(' ');
		++j;
	}
	while (str[i] != '\0')
	{
		putchar(str[i]);
		if (i == 8 && str[i + 1] != '\0')
		{
			putchar('.');
			return ;
		}
		++i;
	}
}
static int	CheckInd(std::string index, int len)
{
	if (index.size() > 1 || index[0] > len + 48 || index[0] < 49)
	{
		return (-1);
	}
	else
	{
		return (index[0] + 48);
	}
}

static void printall(int len, PhoneBook MyPB)
{
	int i;

	i = 1;
	while (i - 1 < len)
	{
		MyPB.PrintCon(i);
		++i;
	}
}

int	main()
{
	int	i;
	std::string s;
	PhoneBook MyPB;
	std::string	index;
	int		len;
	int		hold;

	i = 0;
	len = 0;
	while (s != "EXIT")
	{
		puts("Welcome to phonebook. Enter purpose:");
		std::cin >> s;
		if (s == "ADD")
		{
			if (i == 8)
			{
				len = 8;
				i = 0;
			}
			puts("Enter first name:");
			std::cin >> MyPB.con[i].FirstName;
			puts("Enter last name:");
			std::cin >> MyPB.con[i].LastName;
			puts("Enter nickname:");
			std::cin >> MyPB.con[i].NickName;
			puts("Enter phone number name:");
			std::cin >> MyPB.con[i].PhoneNumber;
			puts("Enter darkest secret:");
			std::cin >> MyPB.con[i++].Secret;
			if (len != 8)
				++len;
		}
		if (s == "SEARCH")
		{
			printall(len, MyPB);
			while (1)
			{
				puts("Enter contact number");
				std::cin >> index;
				hold = CheckInd(index, len);
				if (hold == -1)
				{
					puts("WRONG INDEX");
					std::cin.clear();
					break ;
				}
				else
				{
					MyPB.allcon(hold);
				}
			}
		}
	}
	return (0);
}