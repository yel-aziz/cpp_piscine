/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:56:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/22 19:17:17 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
    this->Energy_points -= 1;
    std::cout << this->Name << ' ' << "are hited effect " << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    Hit_points += amount;
    this->Energy_points -= 1;
    std::cout << "Repair cost you 1 energy point" << std::endl;
}
std::string ClapTrap::getName(void)
{
    return(this->Name);
}

ClapTrap::ClapTrap()
{
    std::cout << "claptrap constructor is called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(Energy_points > 0 && Hit_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << ' ' << "attacks" << ' ' << target << ' ' << "causing 1 points damage!" << std::endl;
        this->Energy_points -= 1;
    }
    else
    std::cout << this->Name << ' ' << "is dead" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap deconstructor" << std::endl;
}

void ClapTrap::setname(std::string name)
{
    this->Name = name;
}
