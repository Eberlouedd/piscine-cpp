/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:07:13 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/04 15:07:14 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return z;
}
