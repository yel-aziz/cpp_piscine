/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 02:17:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat B("yassir",150,137);
        ShrubberyCreationForm S("zakaria");
        S.beSigned(B);
        S.execute(B);
        std::cout << S;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    
    
}