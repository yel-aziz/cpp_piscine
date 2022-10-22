/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/22 21:40:04 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name(), gradesign(), gradeForm()
{
    std::cout << "Default constructor is called Form" << std::endl;
}

Form::~Form()
{
    std::cout << "Default deconstructor is called Form" << std::endl;
}

Form::Form(std::string target ,std::string name, int grade, int sign) : name(name),fTarget(target) ,gradesign(sign), gradeForm(grade)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
    std::cout << "parameters constructor is called Form" << std::endl;
}

Form::Form(Form& fobj) : name(fobj.name), fTarget(fobj.fTarget), indice(fobj.indice), gradesign(fobj.gradesign), gradeForm(fobj.gradeForm)
{
}

Form& Form::operator=(Form& obj)
{
    if(this == &obj)
        return *this;
    this->indice = obj.indice;
    return *this;
}

bool Form::getIndice() const
{
    return this->indice;
}

std::string Form::getName() const
{
    return this->name;
}

int Form::getGradeSign() const
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

void Form::beSigned(Bureaucrat const &obj)
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