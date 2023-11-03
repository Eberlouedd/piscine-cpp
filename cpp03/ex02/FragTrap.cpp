/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:19 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:53:07 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : hp(100), energy(50), attack_d(30)
{
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n), hp(100), energy(50), attack_d(30)
{
    std::cout << "Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
}

void FragTrap::guardGate()
{
    std::cout << "Gade keeper mode on" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}
