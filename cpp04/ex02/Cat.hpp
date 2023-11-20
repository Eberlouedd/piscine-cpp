/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:13 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/19 19:14:45 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *b;
    public:
        Cat();
        Cat(std::string t);
        Cat(Cat const &copy);
        Cat &operator=(const Cat& cat);
        std::string getType() const;
        void makeSound() const;
        ~Cat();
};


#endif