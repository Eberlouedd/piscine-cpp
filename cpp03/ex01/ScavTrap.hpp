/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:03 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:35:44 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    std::string name;
    int hp;
    int energy;
    int attack_d;
public:
    ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(ScavTrap const &copy);
    void guardGate();
    ~ScavTrap();
};
