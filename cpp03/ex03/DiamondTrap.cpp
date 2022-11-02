/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:38:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 14:19:02 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_ClapTrap")
{
   
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap& trap)
{
    trap.Name = this->Name;
    trap.Energy_points = this->Energy_points;
    trap.Hit_points = this->Hit_points;
    trap.Attack_damage = this->Attack_damage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& trap)
{
    this->Name = trap.Name;
    this->Energy_points = trap.Energy_points;
    this->Attack_damage = trap.Attack_damage;
    this->Hit_points = trap.Hit_points;
    return *this;
}
DiamondTrap::~DiamondTrap()
{}

void DiamondTrap::whoAmI()
{
    std::cout << this->Name << " " << ClapTrap::getName() << std::endl;
}