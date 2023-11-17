/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:01:16 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 14:28:19 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), energy(10), attack_d(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n), hp(10), energy(10), attack_d(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "Copy constructor called." << std::endl;
    this->name = copy.name;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    this->name = copy.name;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if(this->hp > 0 && this->energy > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " 
        << target << ", causing " << this->attack_d << " points of damage!" << std::endl;
        this->energy--;
    }
    else
        std::cout << "ClapTrap " << this->name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name << " took " << amount << " damage" << std::endl;
        this->hp -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " already dead " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hp > 0 && this->energy > 0)
    {
        this->hp += amount;
        std::cout << "ClapTrap " << this->name <<  " repaired " << amount << " hp" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " can't repaire " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Desructor called" << std::endl;
}