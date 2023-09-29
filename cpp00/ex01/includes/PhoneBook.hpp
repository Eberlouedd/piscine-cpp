/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:25:47 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 19:25:52 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contact_list[8];
    int contact_num;
public:
    PhoneBook(){};
    PhoneBook(int i);
    ~PhoneBook(){};
    void add_contact();
    void search_contact();
};




#endif