/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:18:43 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/12 16:17:31 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <limits>

typedef struct s_flags
{
	int		chars;
	int		end_f;
	int		let;
	int		period;
	int		sign;
	char	whichSign;
	int		num;
	char	c;
	int		prec;
	int		len;
	char	*arr;
}	t_flags;

enum	check
{
	FALSE,
	TRUE,
};

class Convert
{
	protected:
	long long int iVar;
	char cVar;
	double fVar;
	long double dVar;
	public:
	Convert();
	Convert(const Convert &a);
	Convert & operator = (const Convert &a);
	~Convert();
	int getIVar(t_flags test) const;
	char getCVar(t_flags test) const;
	float	getFVar(t_flags test) const;
	double getDVar(t_flags test) const;
	void setIVar(t_flags test);
	void setCVar(t_flags test);
	t_flags	setFVar(t_flags test);
	t_flags setDVar(t_flags test);
	t_flags detect(std::string str);
	void	printTest(t_flags test, Convert &a);
	void	castVal(void *b, void *a, char c);
	class impossible : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return "impossible\n";
			}
	};
	class unprintable : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return "unprintable\n";
			}
	};
};

t_flags	chooseType(Convert & scal, t_flags test);
t_flags	getPrecision(t_flags test);

#endif