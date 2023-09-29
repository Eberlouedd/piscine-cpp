/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:12:23 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 20:27:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include <string>
#include <iostream>
#include "includes/Contact.hpp"
#include "includes/functions.h"
#include <cstring>
#include <cstdlib>
#include <cctype>

void print_good_length(std::string var)
{
    if(var.length() < 10)
    {
        for(size_t c = 0; c < 10 - var.length(); c++)
            std::cout << " ";
        std::cout << var;
    }
    else
    {
        for(size_t j = 0; j < 9; j++)
            std::cout << var[j];
        std::cout << ".";
    }
}

bool isAllDigit(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main()
{
    PhoneBook p(0);
    std::string answer;

    while (answer != "EXIT")
    {
        std::cout << "Phonebook> ";
        if (!std::getline(std::cin, answer))
             exit(EXIT_SUCCESS);
        if (answer == "ADD")
            p.add_contact();
        else if(answer == "SEARCH")
            p.search_contact();
    } 
}