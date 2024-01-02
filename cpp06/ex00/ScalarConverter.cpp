/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:40:45 by kyacini           #+#    #+#             */
/*   Updated: 2023/12/04 21:46:25 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string s)
{
    std::istringstream iss(s);
    float num;
    int myint;
    char mychar;
    double mydouble;
    if (s == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else
    {
        if (iss >> num) 
        {
            myint = num;
            mychar = myint;
            mydouble = num;
            if(mychar < 32)
                std::cout << "char: non printable" << std::endl;
            else if (mychar > 126)
                std::cout << "char: Limit exceeded" << std::endl;
            else
                std::cout << "char: " << "'" << mychar << "'" << std::endl;
            if (myint < 2147483647 && myint > -2147483648)
                std::cout << "int: " << myint << std::endl;
            else
                std::cout << "int: Limit exceeded" << std::endl;
            std::cout << "double: " << mydouble;
            if (myint == mydouble)
                std::cout << ".0";
            std::cout << std::endl;
            std::cout << "float: " << num;
            if (myint == num)
                std::cout << ".0";
            std::cout << "f" << std::endl;
        } else {
            std::cout << "char: impossible to convert"<< std::endl;
            std::cout << "int: impossible to convert"<< std::endl;
            std::cout << "double: impossible to convert"<< std::endl;
            std::cout << "float: impossible to convert"<< std::endl;
        }
    }
}