/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:56:16 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/03 16:27:01 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if( ac == 1 || ac > 2)
    {
        std::cout << "please enter your purpose..." << std::endl;
        return (0);
    }
        Harl bakay;
        std::string level;
        level = av[1];
        int i;
        i = 0;
        
        std::string str[4] = {"debug", "info", "warning", "error"};
        while(i < 4)
        {
            if (str[i] == level)
                break;
            i++;
        }

    switch(i)
    {
        case 0:
        bakay.complain("debug");
        case 1:
        bakay.complain("info");
         case 2:
        bakay.complain("warning");
         case 3:
        bakay.complain("error");
    }
}