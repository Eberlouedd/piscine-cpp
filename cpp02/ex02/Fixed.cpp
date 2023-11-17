/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:46 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 15:39:20 by kyacini          ###   ########.fr       */
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

bool Fixed::operator>=(Fixed const &f2) const
{
    return this->getRawBits() >= f2.getRawBits();
}

bool Fixed::operator<=(Fixed const &f2) const
{
    return this->getRawBits() <= f2.getRawBits();
}

bool Fixed::operator==(Fixed const &f2) const
{
    return this->getRawBits() == f2.getRawBits();
}

bool Fixed::operator>(Fixed const &f2) const
{
    return this->getRawBits() > f2.getRawBits();
}

bool Fixed::operator<(Fixed const &f2) const
{
    return this->getRawBits() < f2.getRawBits();
}

bool Fixed::operator!=(Fixed const &f2) const
{
    return this->getRawBits() != f2.getRawBits();
}

float Fixed::toFloat() const
{
    return (float)this->nb_point_fixed / (float)(1 << nb_bits);
}

int Fixed::toInt() const
{
    return this->nb_point_fixed >> nb_bits;
}

Fixed Fixed::operator/(Fixed const &val)
{
    Fixed f;
    f.setRawBits(((long int)this->getRawBits() * (1 << this->nb_bits))/ val.getRawBits());
    return (f);
}

Fixed Fixed::operator+(Fixed const &val)
{
    Fixed f;
    f.setRawBits(this->getRawBits() + val.getRawBits());
    return (f);
}

Fixed Fixed::operator-(Fixed const &val)
{
    Fixed f;
    f.setRawBits(this->getRawBits() - val.getRawBits());
    return (f);
}

Fixed Fixed::operator*(Fixed const &val)
{
    Fixed f;
    f.setRawBits(((long int)this->getRawBits() * (long int)val.getRawBits()) / (1 << this->nb_bits));
    return (f);
}

Fixed &Fixed::operator++(void)
{
    this->nb_point_fixed++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed fixed(*this);
    this->nb_point_fixed++;
    return fixed;
}

Fixed &Fixed::operator--(void)
{
    this->nb_point_fixed--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed fixed(*this);
    this->nb_point_fixed--;
    return fixed;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}