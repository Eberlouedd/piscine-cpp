/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:46 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 18:53:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb_point_fixed(0)
{
}

Fixed::Fixed(const Fixed& f) : nb_point_fixed(f.nb_point_fixed)
{
    if(this != &f)
        this->nb_point_fixed = f.getRawBits();
}

Fixed::Fixed(float const param) : nb_point_fixed((int)roundf(param * (1 << nb_bits)))
{
}

Fixed::Fixed(int const param) : nb_point_fixed(param << nb_bits)
{
}

Fixed& Fixed::operator=(const Fixed& newf)
{
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
}