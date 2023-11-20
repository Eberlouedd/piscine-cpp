/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:23:09 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:14:16 by kyacini          ###   ########.fr       */
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

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain copy constructor created" << std::endl;
	for (int i = 0 ; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

std::string Brain::getIdea(int i) const
{
    if ((i >= 100) || (i < 0))
        return (std::cout << "Incorrect index" << std::endl, "");
    else
	    return (this->ideas[i]);
}

void Brain::setIdea(std::string idea, int index)
{
    if ((index >= 100) || (index < 0))
        std::cout << "Incorrect index" << std::endl;
    else
        this->ideas[index] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain deleted" << std::endl;
}