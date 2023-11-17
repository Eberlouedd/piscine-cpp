/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:46 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 15:34:30 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb_point_fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called" << std::endl;
    if(this != &f)
        this->nb_point_fixed = f.getRawBits();
}

Fixed::Fixed(float const param) : nb_point_fixed((int)roundf(param * (1 << nb_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(int const param) : nb_point_fixed(param << nb_bits)
{
    std::cout << "Int constructor called" << std::endl;
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
	return this->nb_point_fixed;
}

void Fixed::setRawBits(int nb_fixed)
{
    this->nb_point_fixed = nb_fixed;
}

std::ostream& operator<<(std::ostream& flux, Fixed const &f)
{
    flux << f.toFloat();
    return flux;
}

float Fixed::toFloat() const
{
    return (float)this->nb_point_fixed / (float)(1 << nb_bits);
}

int Fixed::toInt() const
{
    return this->nb_point_fixed >> nb_bits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}