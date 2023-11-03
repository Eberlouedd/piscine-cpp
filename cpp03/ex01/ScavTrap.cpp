/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:19 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:43:18 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : hp(100), energy(50), attack_d(20)
{
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n), hp(100), energy(50), attack_d(20)
{
    std::cout << "Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
}

void ScavTrap::guardGate()
{
    std::cout << "Gade keeper mode on" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}
