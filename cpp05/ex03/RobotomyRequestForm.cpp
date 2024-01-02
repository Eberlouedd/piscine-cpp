/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:36:36 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/27 18:05:48 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("form", 72, 45), target("Default")
{
    std::cout << "Default Shrubberyform constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("form", 72, 45), target(t)
{
    std::cout << "Shrubberyform constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) : AForm(copy), target(copy.target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& c)
{
	std::cout << "RobotomyRequestForm's copy assignement operator called" << std::endl;
	if (this != &c)
		this->target = c.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
    if(!getSigne())
        throw AForm::NotSignedException();
    std::cout << executor.getName() <<  " executed " << this->getName() << std::endl;
    std::cout << "drilliiiiiiing" << std::endl;
    if (std::rand() % 2)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout<< "The robotomy of "<< this->target << " failed" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
