/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:47:58 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:57:47 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
private:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    virtual std::string getType() const;
    virtual void makeSound() const;
    virtual ~WrongAnimal();
};


#endif