/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:26:24 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 21:50:43 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

Base::Base(/* args */)
{
}

Base::~Base()
{
}

Base * generate(void)
{
    unsigned long rand;
    rand = ((unsigned long)&rand % 5);

    switch (rand)
    {
    case 1:
        std::cout << "A is creating" << std::endl;
        return (new A);
    case 0:
        std::cout << "B is creating" << std::endl;
        return (new B);
    case 2:
        std::cout << "C is creating" << std::endl;
        return (new C);
        
    }
    return (new A);
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "the pointer type is for the A class" << std::endl;
        return;
    }
    if (dynamic_cast<B *>(p))
    {
        std::cout << "the pointer type is for the B class" << std::endl;
        return;
    }
    if (dynamic_cast<C *>(p))
    {
        std::cout << "the pointer type is for the C class" << std::endl;
        return;
    }
}

void identify(Base& p)
{
    A a;
    B b;
    C c;
    try
    {
       a = dynamic_cast<A &>(p);
       std::cout << "the Reference is for A class" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
           c = dynamic_cast<C &>(p);
         std::cout << "the Reference is for C class" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                b =dynamic_cast<B &>(p);
                std::cout << "the Reference is for B class" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "walaaaaho a3elam" << '\n';
            }
            
        }
        
    }
    
}