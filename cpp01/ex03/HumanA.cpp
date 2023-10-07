/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:52:33 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/02 16:56:05 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
}

void HumanA::attack()
{
   std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}