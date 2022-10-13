/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 16:37:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(), gradesign(), gradeForm()
{}

Form::~Form()
{
}
Form::Form(std::string name, int grade, int sign) : name(name), gradesign(sign), gradeForm(grade)
{
    if(grade < 1)
        throw Form::GradeTooHighException();
    if(grade > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(Form& obj)
{
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

void Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= 1)
        this->indice = 1;
    else if (obj.getGrade())
        this->indice = 1;
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& ost, Form& fr)
{
    std::cout << fr.getGradeForm() << " indice " << fr.getIndice() << " name " << fr.getName() << " sign " << fr.getGradeSign()  << " all values of our class" << std::endl; 
     return ost;
}




