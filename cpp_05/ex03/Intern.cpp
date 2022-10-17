/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:22:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/17 22:45:45 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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


Form *Intern::makeform(std::string nameform, std::string target)
{
   Form *(*str[])(std::string target) = { runRobotmyRequestForm, runShrubberyCreationForm,runPresidentialPardonForm};
   std::string names[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotmyRequestForm" };
   for(int i = 0; i < 3; ++i)
   {
    if(names[i] == nameform)
        return str[i](target);
   }
   return NULL;
        
}
