/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:23:03 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 01:38:52 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &brain);
    ~Brain();
};

#endif