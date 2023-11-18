/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:54:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 23:59:39 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(Cure const& copy) : AMateria(copy.type)
{
	std::cout << "Cure CopyConstructor called" << std::endl;
}

Cure&	Cure::operator=(Cure const& c)
{
	if (this != &c)
		type = c.type;
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	Cure	*clone = new Cure();
	std::cout << "Clone of cure materia" << std::endl;
	*clone = *this;
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}