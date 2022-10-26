/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:07:09 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 18:07:19 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    Span obj(4);
    Span g(10000);
    Span add(5);
    int i = 0;
    obj.addNumber(0);
    obj.addNumber(2);
    obj.addNumber(5);
    obj.addNumber(15);
    std::cout << obj.shortestSpan() << std::endl;
    std::cout << obj.longestSpan() << std::endl;
    try
    {
        while (i < 10000)
        {
            g.addNumber(i);
            i++;
        }
        std::cout << g.longestSpan() << std::endl;
        std::cout << g.shortestSpan() << std::endl;
        // to show this test in correction g.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 0;
    }
    add.addNNumber(5,0);
    std::cout << add.shortestSpan() << std::endl;
    std::cout << add.longestSpan() << std::endl;
}

