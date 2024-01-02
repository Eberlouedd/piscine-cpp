/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:29:23 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 03:47:30 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("kenzy", 100);
    Form f("E39", 101, 30);
    std::cout << f << std::endl;
    f.beSigned(b);
    std::cout << std::endl;
    try
    {
        Form form("B45", 153, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    Form l("A65", 99, 4);
    b.signForm(l);
    std::cout << std::endl;
    b.increment();
    b.signForm(l);
    std::cout << std::endl;
    b.signForm(l);
    b.signForm(f);
}