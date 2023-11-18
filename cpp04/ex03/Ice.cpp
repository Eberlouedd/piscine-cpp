/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:00:01 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 00:06:19 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(Ice const& copy) : AMateria(copy.type)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
}

Ice&	Ice::operator=(Ice const& c)
{
	if (this != &c)
		type = c.type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	Ice *clone = new Ice();

	std::cout << "Clone of ice materia" << std::endl;
	*clone = *this;
	return (clone);	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}