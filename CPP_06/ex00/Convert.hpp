/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:18:43 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/11 13:36:09 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

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
	int		len;
}	t_flags;

enum	check
{
	FALSE,
	TRUE,
};

class Convert
{
	protected:
	int iVar;
	char cVar;
	float fVar;
	double dVar;
	public:
	Convert();
	Convert(const Convert &a);
	Convert & operator = (const Convert &a);
	~Convert();
	int getIVar() const;
	char getCVar() const;
	float	getFVar() const;
	double getDVar() const;
	void setIVar(std::string str);
	void setCVar(std::string str);
	void	setFVar(std::string str);
	void setDVar(std::string str);
	t_flags detect(std::string str);
	void	printTest(t_flags test);
};

#endif