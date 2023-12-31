/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:35:52 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/04 15:03:05 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"
#include "includes/Zombie.h"

int main()
{
	Zombie *z = newZombie("Sofia");
	randomChump("Kenzy");
	z->announce();
	delete z;
	return 0;
}