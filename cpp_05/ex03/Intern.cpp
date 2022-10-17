/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:22:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/17 23:29:30 by yel-aziz         ###   ########.fr       */
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


Form *Intern::makeForm(std::string nameform, std::string target)
{
    int i = 0;
   Form *(*str[])(std::string target) = { runRobotmyRequestForm, runShrubberyCreationForm,runPresidentialPardonForm};
   std::string names[] = {"RobotmyRequestForm", "ShrubberyCreationForm",  "PresidentialPardonForm"};
   while (i <= 2 )
   {
        if(nameform == names[i])
            break;
        i++;
   }
   return str[i](target);
   return NULL;
}
