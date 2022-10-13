/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:47 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 22:29:45 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat B("hamza",13);
        Form A("yassir",15,14);
        A.beSigned(B);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}