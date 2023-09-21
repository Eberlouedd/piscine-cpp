/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:12:23 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/21 01:38:04 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <string>
#include <iostream>
#include "../includes/Contact.hpp"

int main()
{
    PhoneBook p;
    int i = 0;
    std::string answer;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    while (answer != "EXIT")
    {
        std::cin >> answer;
        if (answer == "ADD")
        {
            std::cout << "Fist name : ";
            std::cin >> first_name;
            std::cout << "Last name : ";
            std::cin >> last_name;
            std::cout << "Nickname : ";
            std::cin >> nickname;
            std::cout << "Phone number : ";
            std::cin >> phone_number;
            std::cout << "Darket secret: ";
            std::cin >> darkest_secret;
            Contact c(first_name, last_name, nickname, phone_number, darkest_secret);
            i++;
            p.add_contact(c, i);
        }
        p.get_contact();
    } 
}