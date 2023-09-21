/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:15:56 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/21 01:40:48 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

void PhoneBook::add_contact(Contact contact, int i)
{
    this->contact_list[(i % 8) - 1] = contact;
}

void PhoneBook::get_contact()
{
    std::cout << contact_list[0].get_one() << std::endl;
}