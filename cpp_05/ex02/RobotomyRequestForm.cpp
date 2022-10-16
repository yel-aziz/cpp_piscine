/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:51:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 22:56:46 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
}

// RobotomyRequestForm::~RobotomyRequestForm()
// {
// }

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name,"RobotomyRequestForm",45,72) {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIndice() == false) throw FormNotSigned();
    if (executor.getGradeExec() < this->getGradeForm()) throw GradeTooLowException();
    else
        std::cout << this->getTarget() << " Robotomized " << std::endl;
}