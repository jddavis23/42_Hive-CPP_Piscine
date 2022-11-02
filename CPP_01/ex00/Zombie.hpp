/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:56 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/01 12:52:25 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:
	std::string name;
	public:
	void	set_zombie(std::string str)
	{
		name = str;
	}
	void	announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n";
	}
	~Zombie()
	{
		std::cout << name << "\n";
	}
};

Zombie* newZombie( std::string name );

#endif