/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:17 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:53:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string t) : WrongAnimal(t)
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miaou ! Miaou !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}