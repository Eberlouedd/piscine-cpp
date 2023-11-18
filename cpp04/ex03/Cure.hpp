/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:42:10 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 23:56:27 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "Character.hpp"
class Cure : public AMateria
{
    private:
        /* data */
    public:
		Cure();
		Cure(Cure const& toCopy);
		Cure& operator=(Cure const& toAffect);
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
		virtual ~Cure(void);
};

#endif