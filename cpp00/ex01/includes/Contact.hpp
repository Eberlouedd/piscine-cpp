/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:25:44 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 19:19:54 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact(){};
    Contact(std::string f,
    std::string l, std::string n,
    std::string p,
    std::string d);
    std::string get_firstName();
    std::string get_lastName();
    std::string get_nickName();
    std::string get_phoneNumber();
    std::string get_darkestSecret();
    ~Contact(){};
};


#endif