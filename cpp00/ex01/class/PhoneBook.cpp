/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:15:56 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 20:21:38 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include "../includes/functions.h"
#include <cstring>
#include <cstdlib>
#include <cctype>

PhoneBook::PhoneBook(int i) : contact_num(i)
{
}

void PhoneBook::add_contact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
    std::cout << "First name : ";
    if (!std::getline(std::cin, first_name))
        exit(EXIT_SUCCESS);
    std::cout << "Last name : ";
    if(!std::getline(std::cin, last_name))
         exit(EXIT_SUCCESS);
    std::cout << "Nickname : ";
    if(!std::getline(std::cin, nickname))
         exit(EXIT_SUCCESS);
    std::cout << "Phone number : ";
    if(!std::getline(std::cin, phone_number))
         exit(EXIT_SUCCESS);
    std::cout << "Darket secret: ";
    if (!std::getline(std::cin, darkest_secret))
         exit(EXIT_SUCCESS);
    if(!first_name.empty() && !last_name.empty() && !nickname.empty()
            && !phone_number.empty() && !darkest_secret.empty())
    {
        Contact c(first_name, last_name, nickname, phone_number, darkest_secret);
        this->contact_list[(contact_num % 8)] = c;
        this->contact_num += 1;
    }
}

void PhoneBook::search_contact()
{
    std::string index;
    int i = 0;

    std::cout << "\n     Index|First Name| Last Name|  Nickname\n";
    std::cout << "     **************************************\n";
    while(i < 8 && !this->contact_list[i].get_firstName().empty())
    {
        std::cout  << "         " << i;
        std::cout << "|";
        print_good_length(this->contact_list[i].get_firstName());
        std::cout << "|";
        print_good_length(this->contact_list[i].get_lastName());
        std::cout << "|";
        print_good_length(this->contact_list[i].get_nickName());
        std::cout << "\n";
        i++;
    }
    std::cout << "\n";
    std::cout << "Enter an index for more details : ";
    getline(std::cin, index);
    if(!this->contact_list[std::atoi(index.c_str())].get_firstName().empty() && isAllDigit(index) && !index.empty())
    {
        std::cout << "First name : ";
        std::cout << this->contact_list[std::atoi(index.c_str())].get_firstName() << std::endl;
        std::cout << "Last name : ";
        std::cout << this->contact_list[std::atoi(index.c_str())].get_lastName() << std::endl;
        std::cout << "Nickname : ";
        std::cout << this->contact_list[std::atoi(index.c_str())].get_nickName() << std::endl;
        std::cout << "Phone number : ";
        std::cout << this->contact_list[std::atoi(index.c_str())].get_phoneNumber() << std::endl;
        std::cout << "Darkest secret : ";
        std::cout << this->contact_list[std::atoi(index.c_str())].get_darkestSecret() << std::endl;
    }
    else
        std::cout << "Contact not found\n";
}