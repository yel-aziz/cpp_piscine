/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:49:58 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/03 16:26:05 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "PLEASE ENTER THE RIGHT ARGUMENTS :)" << std::endl;
        return (-1);
    }
    if(ft_traitment(av) == 0)
        return (0); 
}
