/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:29:23 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 02:18:37 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("kenzy", 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("michel", 150);
        b.decrement();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat test("whyborn", 1);
    std::cout << test << std::endl;
}