/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:06:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/22 19:16:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high five" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap deconstructor is called" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "constructor fragtrap is called" << std::endl;
    setname(name);
}