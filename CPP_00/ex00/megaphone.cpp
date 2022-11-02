/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:18:38 by jdavis            #+#    #+#             */
/*   Updated: 2022/10/31 12:03:23 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio> //COMEBACK AND CHECK

int main (int argc, char *argv[])
{
	int	i;
	int j;

	j = 1;
	if (argc == 1)
		puts("ENTER ARGUMENTS");
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				putchar(argv[j][i] - 32);
			else
				putchar(argv[j][i]);
			++i;
		}
		++j;
		if (j == argc)
			putchar('\n');
	}
	return (0);
}