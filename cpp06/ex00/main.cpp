/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:50:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 15:56:17 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char **av)
{
    int i = 1;
    Convert o;
    ac = 0;

    if(av[1] == NULL)
    {
        std::cout << "input wrong ..!!" <<std::endl;
        return 0;
    }
    std::string n(av[i++]);
    while(av[i])
    {
        n += ' ';
        n += av[i++];
    }
    o.ft_parcing(n);
    
    
}

