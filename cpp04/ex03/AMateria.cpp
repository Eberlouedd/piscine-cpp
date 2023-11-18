/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:09:52 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 23:44:28 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const& copy): type(copy.type)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

AMateria& AMateria::operator=(AMateria const& c)
{
	if (this != &c)
		type = c.type;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* non identified materia is use on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}