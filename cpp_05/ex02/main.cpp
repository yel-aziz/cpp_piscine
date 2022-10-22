/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/22 21:30:37 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat B("yassir",145,139);
    //     ShrubberyCreationForm S("zakaria");
    //     S.beSigned(B);
    //     B.signForm(S);
    //     B.executeForm(S);
    //     std::cout << S;

    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

      try
    {
        Bureaucrat B("yassir",25,4);
        PresidentialPardonForm P("yassine");
        P.beSigned(B);
        B.signForm(P);
        B.executeForm(P);
        std::cout << P;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // try
    // {
    //     Bureaucrat s("HAMZA",73,45);
    //     s.gradeIncrement();
    //     RobotomyRequestForm R("robot kalb");
    //     R.beSigned(s);
    //     s.signForm(R);
    //     s.executeForm(R);
    //     std::cout << R;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    
    
}