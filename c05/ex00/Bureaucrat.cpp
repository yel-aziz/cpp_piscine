/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:56:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/31 17:37:09 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int Bureaucrat::getGrade()
{
    return(this->grade);
}

const std::string Bureaucrat::getName()
{
    return(this->name);
}

void Bureaucrat::setGrade(int x)
{
    this->grade = x; 
}

void Bureaucrat::GradeTooHighException()
{
    throw "GRADE NUMBER YOU ENTER IS TO HIGH";
}

void Bureaucrat::GradeTooLowException()
{
    throw "GRADE NUMBER YOU ENTER IS TO low";
}

Bureaucrat::Bureaucrat(int x)
{
    try
    {
        if(x > 1)
            GradeTooHighException();
        if(x < 150)
            GradeTooLowException();
        else
            this->grade = x;
    }
    catch(const char *msg)
    {
        std::cout << msg << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if(grade > 1)
        {
            this->grade -= 1;
            GradeTooHighException();
        }
            
    }
    catch(const char * msg)
    {
        std::cerr << msg;
    }
}
void Bureaucrat::incrementGrade()
{
    this->grade += 1;
}