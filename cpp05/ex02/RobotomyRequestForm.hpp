/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:36:39 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/27 16:39:25 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string t);
    RobotomyRequestForm(RobotomyRequestForm const& copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm const& c);
    virtual void execute(Bureaucrat const& executor) const;
    ~RobotomyRequestForm();
};

#endif