/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:03 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 16:01:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(ScavTrap const &copy);
        ScavTrap &operator=(ScavTrap const & c);
        void attack(const std::string &target);
        void guardGate();
        ~ScavTrap();
};

#endif