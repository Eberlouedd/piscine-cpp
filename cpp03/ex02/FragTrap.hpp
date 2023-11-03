/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:35:03 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:51:48 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    std::string name;
    int hp;
    int energy;
    int attack_d;
public:
    FragTrap();
    FragTrap(std::string n);
    FragTrap(FragTrap const &copy);
    void guardGate();
    ~FragTrap();
};
