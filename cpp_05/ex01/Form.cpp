/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 15:59:59 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(), gradeForm(0), gradesign(0)
{}

Form::~Form()
{
}
Form::Form(std::string name, int grade, int sign) : name(name), indice(indice), gradeForm(grade), gradesign(sign)
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


std::ostream& operator<<(std::ostream& ost, Form& fr)
{
    std::cout << fr.getGradeForm() << " " << fr.getIndice() << " " << fr.getName() << " " << fr.getGradeSign()  << " all values of our class" << std::endl;  
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



