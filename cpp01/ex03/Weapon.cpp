/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:09:45 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/02 00:13:09 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{
}

std::string Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}