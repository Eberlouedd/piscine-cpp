/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:50:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/25 22:43:04 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    std::string type;
    Brain *b;
public:
    Dog();
    Dog(Dog const &copy);
    Dog &operator=(const Dog& dog);
    std::string getType() const;
    void makeSound() const;
    ~Dog();
};


#endif