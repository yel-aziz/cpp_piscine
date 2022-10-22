/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:51:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/22 21:44:45 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Defaut constructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Defaut deconstructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& obj)
{
    if (this == &obj)
        return (*this);
    *this = obj;
     return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj) : Form(obj.getName(),"RobotomyRequestForm",45,72)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name,"RobotomyRequestForm",45,72) {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIndice() == false) throw FormNotSigned();
    if (executor.getGradeExec() <= this->getGradeForm())
    {
        std::cout << this->getTarget() << " Robotomized " << std::endl;
    }
    else
         throw GradeTooLowException();
}