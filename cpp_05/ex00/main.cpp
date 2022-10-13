/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:18 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/12 22:23:31 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat j("yassir",5);
        std::cout << j;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat A("Hamid",151);
        std::cout << A;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}