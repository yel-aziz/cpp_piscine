/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:38 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 00:42:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

Form::Form()
{
}

Form::~Form()
{
}
Form::Form(std::string name, const int grade, bool indice) : name(name),indice(indice)
{
    if(grade < 1)
        throw Form::GradeTooHighException();
    if(grade > 150)
        throw Form::GradeTooLowException();
    this->gradeForm = grade;
}

Form& Form::operator=(Form& obj)
{
    this->indice = obj.indice;
    return *this;
}

ostream& operator<<(ostream& ost, Form& fr)
{
    
}
