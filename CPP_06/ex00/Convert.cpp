/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:29:57 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/11 13:36:10 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

t_flags setFlags(t_flags test)
{
	test.chars = FALSE;
	test.end_f = FALSE;
	test.let = FALSE;
	test.period = FALSE;
	test.sign = FALSE;
	test.whichSign = FALSE;
	test.len = FALSE;
	test.num = FALSE;
	return test;
};

t_flags	chooseType(Convert & scal, t_flags test, std::string str)
{
	if (test.num && !test.chars)
	{
		if (test.sign > 1 || test.period > 1 || test.sign > 1)
			test.c = 'm';
		else if (test.end_f)
			test.c = 'f';
		else if (test.period)
			test.c = 'd';
		else if (!test.period)
			test.c = 'i';
	}
	else if (!test.num && test.chars)
	{
		if (test.chars > 1)
			test.c = 'm';
		else
		{
			scal.setCVar(str);
			test.c = 'c';
		}
	}
	else
		test.c = 'm';

};

std::string choosePrint(t_flags test, char c)
{
	switch (c)
	{
  		case 'c':
		{

		}
		case 'i':
		{

		}
		case 'f':
		{

		}
		case 'd':
		{

		}
	}
	return "yes\n";
};

void	Convert::printTest(t_flags test)
{
	std::cout << "char: " << choosePrint(test, 'c');
	std::cout << "int: " << choosePrint(test, 'i');
	std::cout << "float: " << choosePrint(test, 'f');
	std::cout << "double: " << choosePrint(test, 'd');
};

Convert::Convert()
{
};

Convert::Convert(const Convert &a)
{
	iVar = a.iVar;
	cVar = a.cVar;
	fVar = a.fVar;
	dVar = a.dVar;
};

Convert & Convert::operator = (const Convert &a)
{
	if (this != &a)
	{
		iVar = a.iVar;
		cVar = a.cVar;
		fVar = a.fVar;
		dVar = a.dVar;
	}
	return *this;
};

Convert::~Convert()
{
};

int Convert::getIVar() const
{
	return iVar;
};

char Convert::getCVar() const
{
	return cVar;
};

float	Convert::getFVar() const
{
	return fVar;
};

double Convert::getDVar() const
{
	return dVar;
};

t_flags Convert::detect(std::string str)
{
	int i;
	t_flags test;
	
	test = setFlags(test);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0' && str[i] == 'f')
			test.end_f = TRUE;
		if (std::isalpha(str[i]))
		{
			test.chars++;
			if (str[i + 1] == '\0' && str[i] == 'f')
				test.chars--;
		}
		if (std::isdigit(str[i]))
			test.num++;
		if (str[i] == '.')
			test.period++;
		if (str[i] == '+' || str[i] == '-')
		{
			++test.sign;
			test.whichSign = str[i];
		}
		++i;
	}
	if (i == TRUE)
		test.let = TRUE;
	test.len = i;
	return test;
};

void	Convert::setIVar(std::string str)
{
	char *temp = new char[str.length() + 1];

	temp = strcpy(temp, str.c_str());

	iVar = std::atoi(temp);
	delete temp;
};

void	Convert::setCVar(std::string str)
{
	cVar = str[0];
};

void	Convert::setFVar(std::string str)
{
	char *temp = new char[str.length() + 1];

	temp = strcpy(temp, str.c_str());

	fVar = std::atof(temp);
	delete temp;
};

void	Convert::setDVar(std::string str)
{
	char *temp = new char[str.length() + 1];

	temp = strcpy(temp, str.c_str());

	dVar = std::atof(temp);
	delete temp;
};