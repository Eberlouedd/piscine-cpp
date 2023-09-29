/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:35:52 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/29 19:55:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.h"

int main()
{
	Zombie *horde = zombieHorde(5, "Sofia");
	for(int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}