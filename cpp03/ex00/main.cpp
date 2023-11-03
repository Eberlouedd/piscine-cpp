/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:18:43 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:32:39 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1("Sofia");
	ClapTrap player2("Kenzy");

	player1.attack("Kenzy");
	player2.takeDamage(10);
    player2.attack("Sofia");
	player2.beRepaired(10);
    player2.attack("Sofia");
	return (0);
}