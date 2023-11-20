/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:50:34 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:16:29 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *b;
    public:
        Dog();
        Dog(std::string t);
        Dog(Dog const &copy);
        Dog &operator=(const Dog& dog);
        std::string getType() const;
        void makeSound() const;
        ~Dog();
};


#endif