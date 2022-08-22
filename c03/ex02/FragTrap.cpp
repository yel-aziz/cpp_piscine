/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:06:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/22 17:25:22 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high five" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap deconstructor is called" << std::endl;
}