/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 03:55:30 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/25 04:09:20 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string t);
    ShrubberyCreationForm(ShrubberyCreationForm const& copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& c);
    virtual void execute(Bureaucrat const& executor) const;
    ~ShrubberyCreationForm();
};

#endif