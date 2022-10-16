/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 18:31:39 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat B("yassir",150,140);
    //     ShrubberyCreationForm S("zakaria");
    //     S.beSigned(B);
    //     S.execute(B);
    //     std::cout << S;

    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    //   try
    // {
    //     Bureaucrat B("yassir",150,45);
    //     RobotomyRequestForm R("yassine");
    //     R.beSigned(B);
    //     R.execute(B);
    //     std::cout << R;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    {
        Bureaucrat B("dahemad",260,22);
        PresidentialPardonForm P("masjoun");
        P.beSigned(B);
        P.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}