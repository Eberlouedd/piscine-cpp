/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:50:41 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:06:40 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(std::string t) : Animal(t)
{
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    std::cout << "Copy dog constructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouf ! wouf !" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}