/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 22:32:51 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat B("yassir",150,140);
        ShrubberyCreationForm S("zakaria");
        S.beSigned(B);
        S.execute(B);
        std::cout << S;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //   try
    // {
    //     Bureaucrat B("yassir",150,1005);
    //     PresidentialPardonForm P("yassine");
    //     P.beSigned(B);
    //     P.execute(B);
    //     std::cout << P;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // try
    // {
    //     Bureaucrat s("HAMZA",76,45);
    //     RobotomyRequestForm R("robot kalb");
    //     R.beSigned(s);
    //     R.execute(s);
    //     std::cout << R;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    
    
}