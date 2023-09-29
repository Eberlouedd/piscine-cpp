/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:19:45 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/29 19:54:35 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string n) : name(n)
{}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Le zombie " << this->name << " a ete detruit" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return z;
}

void randomChump( std::string name )
{
	Zombie z(name);
	z.announce();
}

