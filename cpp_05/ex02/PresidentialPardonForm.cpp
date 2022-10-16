/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:33:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 18:38:05 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name,"PresidentialPardonForm",45,72)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIndice() == false) throw FormNotSigned();
    if (executor.getGradeExec() < this->getGradeForm() ) throw GradeTooLowException();
    {
        // std::cout << this->getTarget() << " HAS BEEN PARDONED BY ZAPHOD BEEDLEBROX " << std::endl;
    }
}
