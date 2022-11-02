/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:57:32 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/24 18:36:43 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void printer(int const &str)
{
    int i = str * 5;
    std::cout << i << std::endl;
}

void sprinter(std::string const &a)
{
    std::string str = (a + "kafeta f lkhobz");
    std::cout << str << std::endl;
}

int main()
{
    int  str[] = {4,5,2};
    iter(str,2,printer);
    std::string a[] = {"a ","b ","c "};
    iter(a,2,sprinter);

}