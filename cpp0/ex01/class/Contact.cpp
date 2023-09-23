/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:16:07 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 19:21:40 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string d) : first_name(f), last_name(l), nickname(n), phone_number(p), darkest_secret(d)
{
}

std::string Contact::get_firstName()
{
    return (this->first_name);
}

std::string Contact::get_lastName()
{
    return (this->last_name);
}

std::string Contact::get_nickName()
{
    return (this->nickname);
}

std::string Contact::get_phoneNumber()
{
    return (this->phone_number);
}

std::string Contact::get_darkestSecret()
{
    return (this->darkest_secret);
}