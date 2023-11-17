/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:18:43 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/17 15:03:21 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
   	ClapTrap	player1;
	FragTrap	player2("kenzy");
	FragTrap	player2_copy(player2);

	std::cout << std::endl;

	player1 = player2;
	player1.attack("a tree");
	
	std::cout << std::endl;

	player2.attack("sofia");
	player2_copy.takeDamage(100);
	player2.attack("sofia");
	player2_copy.attack("sofia");

	std::cout << std::endl;
	
	player2.highFivesGuys();

	return 0;
}