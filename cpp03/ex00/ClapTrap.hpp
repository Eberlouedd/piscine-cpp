/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:01:21 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 20:22:52 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int hp;
    int energy;
    int attack_d;
public:
    ClapTrap();
    ClapTrap(std::string n);
    ClapTrap(ClapTrap const &copy);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif