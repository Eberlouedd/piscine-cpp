/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:47:57 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/02 16:29:30 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n)
{
}

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << " cannot attack" << std::endl;
	else
		std::cout << this->name << " attacks with their " << (*this->weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
    this->weapon = &w;
}