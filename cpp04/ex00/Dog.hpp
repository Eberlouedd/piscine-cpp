/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:50:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:52:41 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
private:
    std::string type;
public:
    Dog();
    Dog(Dog const &copy);
    std::string getType() const;
    void makeSound() const;
    ~Dog();
};


#endif