/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:24:26 by kyacini           #+#    #+#             */
/*   Updated: 2023/12/31 01:08:43 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef AForm* (*FormCreationFunction)(const std::string &);

class Intern
{
    private:
        FormCreationFunction formFunctions[3];
        std::string index[3];
    public:
        Intern();
        Intern(Intern const& toCopy);
        Intern& operator=(Intern const& toAffect);
		AForm* createShrubberyForm(std::string const& target);
		AForm* createRobotomyForm(std::string const& target);
		AForm* createPresidentialForm(std::string const& target);
		AForm* makeForm(std::string const& form_type, std::string const&target);
        ~Intern();
    };

#endif