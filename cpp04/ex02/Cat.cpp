/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:17 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:16:35 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->b = new Brain();
}

Cat::Cat(std::string t) : Animal(t)
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->b = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    this->type = copy.type;
    this->b = new Brain(*copy.b);
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