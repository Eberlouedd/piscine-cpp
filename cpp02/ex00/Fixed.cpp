/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:46 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 15:43:34 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb_point_fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) : nb_point_fixed(f.nb_point_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    if(this != &f)
        this->nb_point_fixed = f.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& newf)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &newf)
        this->nb_point_fixed = newf.getRawBits();
    return *this;
}

int	Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->nb_point_fixed;
}

void Fixed::setRawBits(int nb_fixed)
{
    this->nb_point_fixed = nb_fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
