/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:06:48 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 01:01:19 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor called." << std::endl;
	name = "None";
	first_void = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(std::string const& name)
{
	std::cout << "Character Constructor called." << std::endl;
	this->name = name;
	first_void = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(Character const& toCopy)
{
	std::cout << "Character Copy Constructor called." << std::endl;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	*this = toCopy;
}

Character&	Character::operator=(Character const& toAffect)
{
	if (this != &toAffect)
	{
		name = toAffect.name;
		for (int i = 0; i < 4; ++i)
		{
			if (toAffect.inventory[i])
			{	
				if (inventory[i])
					delete inventory[i];
				inventory[i] = toAffect.inventory[i]->clone();
			}
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}


std::string const& Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *materia)
{
	if (materia != NULL && first_void < 4)
	{
		inventory[first_void] = materia;
		std::cout << name << " equips himself with " << materia->getType() << std::endl;
		for (first_void = first_void + 1; first_void < 4; ++first_void)
			if (inventory[first_void] == NULL)
				break;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
	{
		std::cout << name << " unequips himself with " << inventory[idx]->getType() << std::endl;
		inventory[idx] = NULL;
		if (idx < first_void)
			first_void = idx;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

void	Character::show_inventory() const
{
	std::cout << name << "'s Inventory:" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		std::cout << i + 1;
		if (inventory[i] != NULL)
			std::cout << "- " << inventory[i]->getType() << std::endl;
		else
			std::cout << "- empty" << std::endl;
	}
}

Character::~Character()
{
	std::cout << "Character Destructor called." << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i])
			delete inventory[i];
	}
}