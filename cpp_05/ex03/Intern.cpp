/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:22:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/22 21:54:52 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor is created" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default deconstructor is called" << std::endl;
}

Form *runRobotmyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *runShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *runPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Intern& Intern::operator=(Intern& obj)
{
    if(this == &obj)
        return *this;
    *this = obj;
    return *this;
}

Form *Intern::makeForm(std::string nameform, std::string target)
{
    int i = 0;
   Form *(*str[])(std::string target) = { runRobotmyRequestForm, runShrubberyCreationForm,runPresidentialPardonForm};
   std::string names[] = {"RobotmyRequestForm", "ShrubberyCreationForm",  "PresidentialPardonForm"};
   while (i <= 2 )
   {
        if(nameform == names[i])
        {
            std::cout << "Intern creates " << nameform << std::endl; 
              return str[i](target);
        }
        i++;
   }
    int *x = new int();
    *x = 1;
   std::cout << "ther is no form with you input" << std::endl;
   return NULL;
}
