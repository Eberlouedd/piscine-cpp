/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:12:53 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 03:28:41 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int grade_execute;
        const int grade_signe;
        bool signe;
    public:
        Form();
        Form(std::string n, int gs, int ge);
        Form(Form const& copy);
        Form& operator=(Form const& c);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class AlreadySignedException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        void beSigned(Bureaucrat &b);
        std::string const& getName() const;
        int getGradeExecute() const;
        int getGradeSigne() const;
        int getSigne() const;
        ~Form();
};

std::ostream& operator<<(std::ostream &flux, Form const& f);

#endif
