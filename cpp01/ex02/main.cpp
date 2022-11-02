/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:32:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 16:04:22 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string& stringREF = str;
    std::cout << &str << '\n';
    std::cout << stringPTR << '\n';
    std::cout << &stringREF << '\n';
    std::cout << str << '\n';
    std::cout << *stringPTR << '\n';
    std::cout << stringREF << '\n';
}