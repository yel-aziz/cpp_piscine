/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:49:58 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/30 16:52:19 by yel-aziz         ###   ########.fr       */
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
    ft_traitment(av);
}
