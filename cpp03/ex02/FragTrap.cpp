/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:19 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 16:06:00 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hp = 100;
    this->energy = 100;
    this->attack_d = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hp = 100;
    this->energy = 100;
    this->attack_d = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->attack_d = copy.attack_d;
}

FragTrap &FragTrap::operator=(FragTrap const & c)
{
    this->ClapTrap::operator=(c);
    return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " wants to high five !" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if(this->hp > 0 && this->energy > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " 
        << target << ", causing " << this->attack_d << " points of damage!" << std::endl;
        this->energy--;
    }
    else
        std::cout << "FragTrap " << this->name << " can't attack" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}
