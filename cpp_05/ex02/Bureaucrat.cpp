/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:00:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 23:50:46 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor is called Bureaucrat" << std::endl;
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default deconstructor is called Bureaucrat" << std::endl;
}

void Bureaucrat::setGrade(int i)
{
    this->grade = i;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj) : name(obj.name)
{
    this->grade = obj.grade;
    this->gradeToexec = obj.gradeToexec;
}

void Bureaucrat::gradeIncrement()
{
    if (grade == 1)
    grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDecerement()
{
    if (grade == 150)
        grade++;
    else    
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade, int gradeToexec) : name(name) , gradeToexec(gradeToexec)
{
     if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    this->grade = grade;
    std::cout << "parameters constructor is called Bureaucrat" << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
    
    try {
        form.execute(*this);
    } 
    catch (std::exception & e) {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
        e.what();
        return;
    }
    std::cout << this -> getName() << " executes " << form.getName() << std::endl;
    
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

int Bureaucrat::getGradeExec() const
{
    return this->gradeToexec;
}

const std::string Bureaucrat::getName() const
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