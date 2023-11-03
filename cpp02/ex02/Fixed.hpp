/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:50 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 18:49:38 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
private:
    int nb_point_fixed;
    static const uint nb_bits = 8;
public:
    Fixed();
    Fixed(int const param);
    Fixed(float const param);
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& autre);
    int	getRawBits(void) const;
    void setRawBits(int nb_fixed);
    float toFloat() const;
    int toInt() const;
    bool operator>=(Fixed const &f2) const;
    bool operator<=(Fixed const &f2) const;
    bool operator==(Fixed const &f2) const;
    bool operator>(Fixed const &f2) const;
    bool operator<(Fixed const &f2) const;
    bool operator!=(Fixed const &f2) const;
    Fixed operator/(Fixed const &val);
    Fixed operator*(Fixed const &val);
    Fixed operator-(Fixed const &val);
    Fixed operator+(Fixed const &val);
    Fixed &operator--(void);
    Fixed &operator++(void);
    Fixed operator--(int);
    Fixed operator++(int);
    static Fixed &max(Fixed &f1, Fixed &f2);
    static Fixed &min(Fixed &f1, Fixed &f2);
    static Fixed const &max(Fixed const &f1, Fixed const &f2);
    static Fixed const &min(Fixed const &f1, Fixed const &f2);
    ~Fixed();

};
std::ostream& operator<<(std::ostream& flux, Fixed const &f);


#endif