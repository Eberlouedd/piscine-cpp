/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:48:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:56:23 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : type(copy.type)
{
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& animal)
{
    this->type = animal.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Default wrong sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}