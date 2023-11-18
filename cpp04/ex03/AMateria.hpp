/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:11:14 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 00:44:16 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAS_HPP
#define AMATERIAS_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const& copy);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		AMateria& operator=(AMateria const& c);
		virtual void use(ICharacter& target);
		virtual ~AMateria();
};

#endif