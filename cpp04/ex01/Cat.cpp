/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:17 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/25 22:43:49 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->b = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    this->b = copy.b;
}

void Cat::makeSound() const
{
    std::cout << "Miaou ! Miaou !" << std::endl;
}

Cat &Cat::operator=(const Cat& cat)
{
    this->type = cat.type;
    return (*this);
}

std::string Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->b;
}