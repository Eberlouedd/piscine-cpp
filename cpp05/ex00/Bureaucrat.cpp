/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:38:25 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 02:50:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
    std::cout << "Default constructor bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n), grade(g)
{
    std::cout << "Constructor bureaucrat called" << std::endl;
    if(g > 150)
    {
        throw GradeTooLowException();
    }
    else if (g < 1)
    {
        throw GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) : name(copy.name), grade(copy.grade)
{
    if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& c)
{
	if (this != &c)
		grade = c.grade;
	return (*this);
}

std::string const& Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
    return "Grade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
    return "Grade is too low";
}

void Bureaucrat::increment()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
	std::cout << "You have been promoted !" << std::endl;
}

void Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade++;
	std::cout << "You have been downgrade !" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor bureaucrat called" << std::endl;
}

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& b)
{
	flux << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (flux);
}