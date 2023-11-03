/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:44 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/25 23:54:50 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Dog* j = new Dog();
    const Cat* i = new Cat();
    const Animal *tab[2];
    tab[0] = j;
    tab[1] = i;
    for (int i = 0; i < 2; i++)
			delete tab[i];
    return 0;
}