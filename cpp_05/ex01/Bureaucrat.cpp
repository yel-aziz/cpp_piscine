/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:00:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 15:56:54 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor is called" << std::endl;
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default deconstructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
     if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    this->grade = grade;
}


int Bureaucrat::getGrade()
{
    return this->grade;
}

const std::string Bureaucrat::getName()
{
    return this->name;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& obj)
{
    this->grade = obj.grade;
        return *this;    
}

void Bureaucrat::signForm(Form& form)
{
    if (form.getIndice() == 1)
        std::cout << this->name << " signed (: " << form.getName() << std::endl;
    else
         std::cout << this->name << " couldn't signed!!!! " << form.getName() << std::endl;
}
std::ostream& operator<<(std::ostream& cout, Bureaucrat& obj)
{
    std::cout << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
    return cout;
}