/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:19 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 16:07:06 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hp = 100;
    this->energy = 50;
    this->attack_d = 20;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hp = 100;
    this->energy = 50;
    this->attack_d = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & c)
{
    this->ClapTrap::operator=(c);
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if(this->hp > 0 && this->energy > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " 
        << target << ", causing " << this->attack_d << " points of damage!" << std::endl;
        this->energy--;
    }
    else
        std::cout << "ScavTrap " << this->name << " can't attack" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Gade keeper mode on" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
