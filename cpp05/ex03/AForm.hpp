/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:12:53 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/27 17:59:14 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int grade_execute;
        const int grade_signe;
        bool signe;
    public:
        AForm();
        AForm(std::string n, int gs, int ge);
        AForm(AForm const& copy);
        AForm& operator=(AForm const& c);
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
        class NotSignedException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        void beSigned(Bureaucrat &b);
        std::string const& getName() const;
        int getGradeExecute() const;
        int getGradeSigne() const;
        int getSigne() const;
        virtual void execute(Bureaucrat const& executor) const = 0;
        ~AForm();
};

std::ostream& operator<<(std::ostream &flux, AForm const& f);

#endif
