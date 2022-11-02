/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:05:46 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/24 21:38:34 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> A(5);
    Array<char> C(6);
    
    for(int i = 0; i < 5;i++)
    {
        A[i] = i;
    }
    std::cout << A[0] <<std::endl;
    std::cout << A[2] <<std::endl;



     for(int i = 0; i < 5;i++)
    {
        C[i] = i + 65;
    }
    
    std::cout << C[0] <<std::endl;
    std::cout << C[1] <<std::endl;
    try
    {
        std::cout << C[7] <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
