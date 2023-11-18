/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:33:29 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 00:42:11 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& toCopy);
		MateriaSource& operator=(MateriaSource const& toAffect);
		virtual	~MateriaSource();
		virtual void	learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const& type);
		virtual void	show_inventory() const;
	private:

		int	size;
		AMateria *inventory[4];
};

#endif