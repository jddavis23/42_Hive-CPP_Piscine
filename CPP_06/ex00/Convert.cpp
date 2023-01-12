/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:29:57 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/12 16:36:00 by jdavis           ###   ########.fr       */
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
	test.arr = NULL;
	test.prec = FALSE;
	return test;
};

t_flags	chooseType(Convert & scal, t_flags test)
{
	if (test.num && !test.chars)
	{
		if (test.sign > 1 || test.period > 1 || test.sign > 1)
		{
			test.c = 'm';
		}
		else if (test.end_f)
		{
			test.c = 'f';
			test = scal.setFVar(test);
		}
		else if (test.period)
		{
			test.c = 'd';
			test = scal.setDVar(test);
		}
		else if (!test.period)
		{
			test.c = 'i';
			scal.setIVar(test);
		}
	}
	else if (!test.num && test.chars)
	{
		if (test.chars > 1)
			test.c = 'm';
		else
		{
			test.c = 'c';
			scal.setCVar(test);
		}
	}
	else
		test.c = 'm';
	return test;
};

void choosePrint(t_flags test, char c, Convert &a)
{
	try
	{
		switch (c)
		{
			case 'c':
			{
				std::cout << a.getCVar(test) << std::endl;
				return ;
			}
			case 'i':
			{
				std::cout << a.getIVar(test) << std::endl;
				return ;
			}
			case 'f':
			{
				std::cout << std::setprecision(test.prec) << a.getFVar(test) << "f" << std::endl;
				return ;
			}
			case 'd':
			{
				std::cout << std::setprecision(test.prec) << a.getDVar(test) << std::endl;
				return ;
			}
		}
	}
	catch (std::exception &a)
	{
		std::cout << a.what();
	}
};

void	Convert::printTest(t_flags test, Convert &a)
{
	std::cout << "char: ";
	choosePrint(test, 'c', a);
	std::cout << "int: ";
	choosePrint(test, 'i', a);
	std::cout << "float: ";
	choosePrint(test, 'f', a);
	std::cout << "double: ";
	choosePrint(test, 'd', a);
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

int Convert::getIVar(t_flags test) const
{
	if (iVar > INT_MAX || iVar < INT_MIN || test.c == 'm' || test.len > 10)
		throw Convert::impossible();
	return iVar;
};

char Convert::getCVar(t_flags test) const
{
	if (test.c == 'm')
		throw Convert::impossible();
	else if (!std::isprint(cVar))
		throw Convert::unprintable();
	return cVar;
};

float	Convert::getFVar(t_flags test) const
{
	if (fVar > FLT_MAX || fVar < -FLT_MAX || test.c == 'm')
	{
		throw Convert::impossible();
	}
	return fVar;
};

double Convert::getDVar(t_flags test) const
{
	if (fVar > DBL_MAX || fVar < -DBL_MIN || test.c == 'm')
		throw Convert::impossible();
	return dVar;
};

t_flags Convert::detect(std::string str)
{
	int i;
	t_flags test;
	
	test = setFlags(test);
	test.arr = new char[str.length() + 1];

	strcpy(test.arr, str.c_str());
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

void	Convert::setIVar(t_flags test)
{
	iVar = std::atoll(test.arr);
	cVar = (char)iVar;
	fVar = static_cast< float >(iVar) * 1.0;
	dVar = (double)iVar  * 1.0;
};

void	Convert::setCVar(t_flags test)
{
	cVar = test.arr[0];
	iVar = (int)cVar;
	fVar = (float)cVar * 1.0;
	dVar = (double)cVar * 1.0;
};

t_flags	Convert::setFVar(t_flags test)
{
	test = getPrecision(test);
	fVar = std::atof(test.arr);
	cVar = (char)fVar;
	iVar = (int)fVar;
	dVar = (double)fVar;
	return test;
};

t_flags	Convert::setDVar(t_flags test)
{
	test = getPrecision(test);
	dVar = std::atof(test.arr);
	cVar = (char)dVar;
	iVar = (int)dVar;
	fVar = (double)dVar;
	return test;
};

t_flags	getPrecision(t_flags test)
{
	char	*i;
	int		count;

	i = strchr(test.arr, '.');
	count = 0;
	while (*i != '\0' && *i != 'f')
	{
		++count;
		++i;
	}
	test.prec = --count;
	return test;
};