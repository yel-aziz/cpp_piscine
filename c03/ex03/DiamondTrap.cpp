/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:54:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/23 20:23:26 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "my name = " << this->name << "clap trap name = " <<  std::endl;
}

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "deconstructor diamond is called" << std::endl;
}