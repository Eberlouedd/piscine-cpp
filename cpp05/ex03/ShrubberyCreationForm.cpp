/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 03:55:04 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/27 18:05:37 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("form", 145, 137), target("Default")
{
    std::cout << "Default Shrubberyform constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("form", 145, 137), target(t)
{
    std::cout << "Shrubberyform constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) : AForm(copy), target(copy.target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& c)
{
	std::cout << "ShrubberyCreationForm's copy assignement operator called" << std::endl;
	if (this != &c)
		this->target = c.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    std::ofstream		flux;
    std::string file;
    if (executor.getGrade() > this->getGradeExecute());
        throw AForm::GradeTooLowException();
    if(!getSigne())
        throw AForm::NotSignedException();
    std::cout << executor.getName() <<  " executed " << this->getName() << std::endl;
    file = this->target;
	file.append("_shrubbery");
    flux.open(file.c_str());
    flux << "……..@*@*\n"
    << "….@*……..@* …………………………@*\n"
    << "..@*……………@* ………………@*……..@*\n"
    << ".@*……………….@*……….@*……………..@*\n"
    << "@*…………………..@*…@*………………….@*\n"
    << "@*………………………*……………………..@*\n"
    << ".@*…………………………………………….@*\n"
    << "..@*………………………………………..@*\n"
    << "….@*…………………………………..@*\n"
    << "……..@*…………………………..@*\n"
    << "………..@*……………………@*\n"
    << "…………….@*…………..@*\n"
    << "……………….@*……@*\n"
    << "………………….*..@*\n"
    << "……………………@\n"
    << "……………………*\n"
    << "……………………@\n"
    << "……………………*\n" << std::endl;
    flux.close();
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

