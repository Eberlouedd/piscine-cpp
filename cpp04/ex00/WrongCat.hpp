/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:05:13 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/18 02:52:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongCat_HPP
#define WRONGWrongCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string type;
public:
    WrongCat();
    WrongCat(WrongCat const &copy);
    std::string getType() const;
    void makeSound() const;
    ~WrongCat();
};


#endif