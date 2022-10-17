/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:59:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/17 23:32:08 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat b("yassir",73,41);
        Form* rrf;
        rrf = someRandomIntern.makeForm("RobotmyRequestForm", "Bender");
        rrf->beSigned(b);
        b.signForm(*rrf);
        b.executeForm(*rrf);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}