/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:56:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/29 22:33:34 by yel-aziz         ###   ########.fr       */
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

char const* Bureaucrat::GradeTooHighException()
{
    throw "GRADE NUMBER YOU ENTER IS TO HIGH";
}

char const *  Bureaucrat::GradeTooLowException()
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
    catch(char const * msg)
    {
        std::cerr << msg;
    }
    
}