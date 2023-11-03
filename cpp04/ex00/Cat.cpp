/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:17 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:53:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Copy Cat constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou ! Miaou !" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}