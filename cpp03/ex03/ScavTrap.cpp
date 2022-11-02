/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:22:00 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 13:51:45 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    this->Name  =  "mamtourekhch"; 
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "ScavTrap default constructor \n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "deconstructor ScavTrap is called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap& trap)
{
    trap.Attack_damage = this->Attack_damage;
    trap.Energy_points = this->Energy_points;
    trap.Hit_points = this->Hit_points;
    trap.Name = this->Name;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Name  =  name; 
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "ScavTrap name constructor  \n";
}

ScavTrap& ScavTrap::operator=(ScavTrap& trap)
{
    this->Name = trap.Name;
    this->Hit_points = trap.Hit_points;
    this->Attack_damage = trap.Attack_damage;
    this->Energy_points = trap.Energy_points;
    return *this;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in GateKeeper mode" << std::endl;
}