/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/15 22:37:57 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name(), gradesign(), gradeForm()
{}

Form::~Form()
{
}

Form::Form(std::string target ,std::string name, int grade, int sign) : name(name), gradesign(sign), gradeForm(grade) , fTarget(target)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(Form& obj)
{
    this->indice = obj.indice;
    return *this;
}
bool Form::getIndice() const
{
    return this->indice;
}

std::string Form::getName()
{
    return this->name;
}

int Form::getGradeSign()
{
    return this->gradesign;
}

std::string Form::getTarget() const
{
    return this->fTarget;
}

int Form::getGradeForm() const
{
    return this->gradeForm;
}

void Form::beSigned(Bureaucrat  &obj)
{
    if (obj.getGrade() >= this->gradesign)
        this->indice = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& ost, Form& fr)
{
    std::cout << fr.getGradeForm() << " indice " << fr.getIndice() << " name " << fr.getName() << " sign " << fr.getGradeSign()  << " all values of our class" << std::endl; 
     return ost;
}