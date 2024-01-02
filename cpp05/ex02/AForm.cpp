/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:21:41 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 03:42:35 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), grade_execute(150), grade_signe(150), signe(false)
{
    std::cout << "Default constructor AForm called" << std::endl;
}

AForm::AForm(std::string n, int gs, int ge) : name(n), grade_execute(ge), grade_signe(gs), signe(false)
{
    std::cout << "AForm Constructor called" << std::endl;
    if (this->grade_execute < 1 || this->grade_signe < 1)
		throw AForm::GradeTooHighException();
	if (this->grade_execute > 150 || this->grade_signe > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& copy) : name(copy.name), grade_execute(copy.grade_execute), grade_signe(copy.grade_signe)
{
    if (this->grade_execute < 1 || this->grade_signe < 1)
		throw AForm::GradeTooHighException();
	if (this->grade_execute > 150 || this->grade_signe > 150)
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw ()
{
    return "Grade is too hight for this AForm";
}

const char* AForm::GradeTooLowException::what() const throw ()
{
    return "Grade is too low for this AForm";
}

const char* AForm::AlreadySignedException::what() const throw ()
{
    return "the Form is already signed";
}

const char* AForm::NotSignedException::what() const throw ()
{
    return "the Form is not signed yet, can't execute";
}


AForm& AForm::operator=(AForm const& c)
{
	if (this != &c)
		this->signe = c.signe;
	return (*this);
}

void AForm::beSigned(Bureaucrat &b)
{
    if (this->signe)
        throw AForm::AlreadySignedException();
    else if(b.getGrade() > grade_signe)
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << b.getName() <<  " signed " << name << std::endl;
        this->signe = true;
    }
        
}

std::string const& AForm::getName() const
{
    return (this->name);
}

int AForm::getGradeExecute() const
{
    return (this->grade_execute);
}

int AForm::getGradeSigne() const
{
    return (this->grade_signe);
}

int AForm::getSigne() const
{
    return (this->grade_signe);
}

std::ostream& operator<<(std::ostream &flux, AForm const& f)
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

AForm::~AForm()
{
    std::cout << "Destructor AForm called" << std::endl;
}
