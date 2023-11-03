/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:18:43 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/17 21:53:25 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap	player1;
	FragTrap	player2("kenzy");
	FragTrap	player2_copy(player2);

	std::cout << std::endl;
	
	player1.attack("sofia");
	
	std::cout << std::endl;
	
	player2.attack("sofia");
	player2_copy.takeDamage(100);

	std::cout << std::endl;
	
	player1.takeDamage(100);

	std::cout << std::endl;
	
	player2.attack("sofia");
	player2_copy.attack("sofia");
	player2.guardGate();
	std::cout << std::endl;

	return 0;
}