/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:10:50 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 15:41:59 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int nb_point_fixed;
    static const uint nb_bits = 8;
public:
    Fixed();
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& autre);
    int	getRawBits(void) const;
    void setRawBits(int nb_fixed);
    ~Fixed();
};

#endif