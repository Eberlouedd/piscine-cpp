/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:25:47 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/21 01:36:24 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contact_list[8];
public:
    PhoneBook(){};
    ~PhoneBook(){};
    void add_contact(Contact contact, int i);
    void get_contact();
};




#endif