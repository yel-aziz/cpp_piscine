/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/22 21:33:13 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name(), gradesign(), gradeForm()
{}

Form::~Form()
{
}

Form::Form(std::string name, int grade, int sign) : name(name), gradesign(grade), gradeForm(sign)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(Form& obj)
{
    if(this == &obj)
        return *this;
    this->indice = obj.indice;
    return *this;
}
int Form::getIndice()
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
int Form::getGradeForm()
{
    return this->gradeForm;
}

void Form::beSigned(Bureaucrat  &obj)
{
 if (obj.getGrade() <= this->getGradeSign())
        this->indice = 1;
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& ost, Form& fr)
{
    ost << fr.getGradeForm() << " indice " << fr.getIndice() << " name " << fr.getName() << " sign " << fr.getGradeSign()  << " all values of our class" << std::endl; 
    return ost;
}