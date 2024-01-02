/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:19:53 by kyacini           #+#    #+#             */
/*   Updated: 2023/12/31 01:20:05 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern's default constructor called" << std::endl;
}

Intern::Intern(Intern const& toCopy)
{
	std::cout << "Intern's copy constructor called" << std::endl;
	(void) toCopy;
}

Intern& Intern::operator=(Intern const& toAffect)
{
	std::cout << "Intern's copy assignement operator called" << std::endl;
	(void) toAffect;
	return (*this);
}

AForm* Intern::createShrubberyForm(std::string const& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomyForm(std::string const& target)
{

	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPresidentialForm(std::string const& target)
{

	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string const& form_type, std::string const& target)
{
	std::string form_types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*forms_ptr[3])(std::string const&) = {&Intern::createShrubberyForm, &Intern::createRobotomyForm, &Intern::createPresidentialForm};
	for (int i = 0; i < 3; ++i)
	{
		if (form_type == form_types[i])
			return ((this->*forms_ptr[i])(target));
	}
	return (NULL);
}

Intern::~Intern(void)
{
	std::cout << "Intern's destructor called" << std::endl;
}