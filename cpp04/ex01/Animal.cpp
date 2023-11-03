/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:48:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/25 22:39:50 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
}

Animal::Animal(Animal const &copy) : type(copy.type)
{
}

std::string Animal::getType() const
{
    return this->type;
}

Animal &Animal::operator=(const Animal& animal)
{
    this->type = animal.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Default sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}