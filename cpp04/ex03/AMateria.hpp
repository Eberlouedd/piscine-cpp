/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:11:14 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 13:43:50 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAS_HPP
#define AMATERIAS_HPP
#include <iostream>
#include <string>

class AMateria
{
	protected:

	public:
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif