/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:23:09 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/25 19:50:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
}

Brain &Brain::operator=(Brain const &brain)
{
	for (int i = 0 ; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain()
{
    std::cout << "Brain deleted" << std::endl;
}