/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:06:33 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 13:59:11 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "constructor fragtrap is called" << std::endl;
    this->Name = name;
}

FragTrap::FragTrap()
{
    std::cout << "constructor fragtrap is called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap& trap)
{
    trap.Attack_damage = this->Attack_damage;
    trap.Hit_points = this->Hit_points;
    trap.Name = this->Name;
    trap.Energy_points = this->Energy_points;
}

FragTrap& FragTrap::operator=(FragTrap& trap)
{
    this->Energy_points = trap.Energy_points;
    this->Name = trap.Name;
    this->Attack_damage = trap.Attack_damage;
    this->Hit_points = trap.Hit_points;
    return *this;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high five" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap deconstructor is called" << std::endl;
}
