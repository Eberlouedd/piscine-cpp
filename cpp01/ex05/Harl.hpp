/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:29:18 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/07 01:57:59 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
private:
    std::string index[4];
    void    (Harl::*levels[4])(void);
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
public:
    Harl();
    void complain(std::string level);
    ~Harl(){};
};

#endif