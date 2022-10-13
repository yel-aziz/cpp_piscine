/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 15:09:58 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

Form::Form(){}

Form::~Form()
{
}
Form::Form(std::string name, int grade, bool indice, int sign) : name(name), indice(indice), gradeForm(grade), gradesign(sign)
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
    if (obj.getGrade() <= 1 || obj.getGrade() >= 150)}
