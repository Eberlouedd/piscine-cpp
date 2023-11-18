/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:42:13 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 00:01:33 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "Character.hpp"
class Ice : public AMateria
{
    private:
        /* data */
    public:
        Ice(void);
		Ice(Ice const& toCopy);
		Ice&	operator=(Ice const& toAffect);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);	
		virtual ~Ice(void);
};

#endif