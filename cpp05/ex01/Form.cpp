/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:21:41 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 03:42:35 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), grade_execute(150), grade_signe(150), signe(false)
{
    std::cout << "Default constructor form called" << std::endl;
}

Form::Form(std::string n, int gs, int ge) : name(n), grade_execute(ge), grade_signe(gs), signe(false)
{
    std::cout << "Form Constructor called" << std::endl;
    if (this->grade_execute < 1 || this->grade_signe < 1)
		throw Form::GradeTooHighException();
	if (this->grade_execute > 150 || this->grade_signe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& copy) : name(copy.name), grade_execute(copy.grade_execute), grade_signe(copy.grade_signe)
{
    if (this->grade_execute < 1 || this->grade_signe < 1)
		throw Form::GradeTooHighException();
	if (this->grade_execute > 150 || this->grade_signe > 150)
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw ()
{
    return "Grade is too hight for this form";
}

const char* Form::GradeTooLowException::what() const throw ()
{
    return "Grade is too low for this form";
}

const char* Form::AlreadySignedException::what() const throw ()
{
    return "the form is already signed";
}

Form& Form::operator=(Form const& c)
{
	if (this != &c)
		this->signe = c.signe;
	return (*this);
}

void Form::beSigned(Bureaucrat &b)
{
    if (this->signe)
        throw Form::AlreadySignedException();
    else if(b.getGrade() > grade_signe)
        throw Form::GradeTooLowException();
    else
    {
        std::cout << b.getName() <<  " signed " << name << std::endl;
        this->signe = true;
    }
        
}

std::string const& Form::getName() const
{
    return (this->name);
}

int Form::getGradeExecute() const
{
    return (this->grade_execute);
}

int Form::getGradeSigne() const
{
    return (this->grade_signe);
}

int Form::getSigne() const
{
    return (this->grade_signe);
}

std::ostream& operator<<(std::ostream &flux, Form const& f)
{
	flux << "Name : " << f.getName() << "\n"
    << "Grade to signe : " << f.getGradeSigne() << "\n"
    << "Grade to execute : "
	<< f.getGradeExecute() << "\n"
    << "Status : ";
	if (f.getSigne())
		flux << "signed";
	else
		flux << "not signed";
	return (flux);
}

Form::~Form()
{
    std::cout << "Destructor form called" << std::endl;
}
