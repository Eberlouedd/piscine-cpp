/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:38:22 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 02:30:42 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string n, int g);
    Bureaucrat& operator=(Bureaucrat const& c);
    Bureaucrat(Bureaucrat const& copy);
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw ();
    };
    std::string const& getName() const;
    int getGrade() const;
    void decrement();
    void increment();
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& b);

#endif