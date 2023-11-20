/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:47:58 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:35:21 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string t);
        Animal(Animal const &copy);
        Animal &operator=(const Animal& animal);
        std::string getType() const;
        virtual void makeSound() const = 0;
        virtual ~Animal();
};


#endif