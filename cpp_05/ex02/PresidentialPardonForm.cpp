/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:33:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/17 00:38:56 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default constructor presidential is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name,"PresidentialPardonForm",5,25)
{
        std::cout << "parameters constructor presidential is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
        std::cout << "Default deconstructor presidential is called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& pre) : Form(pre.getName(),"PresidentialPardonForm",5,25)
{

}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& pre)
{
    *this = pre;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIndice() == false) throw FormNotSigned();
    if (executor.getGradeExec() <= this->getGradeForm()) throw GradeTooLowException();
    else
        std::cout << this->getTarget() << " HAS BEEN PARDONED BY ZAPHOD BEEDLEBROX " << std::endl;
}
