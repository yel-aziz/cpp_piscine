/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:56:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 12:15:10 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name  =  "mamtourekhch"; 
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "hahowa twled mamtourekhch \n";
}

ClapTrap::ClapTrap(ClapTrap& trap)
{
    trap.Energy_points = this->Hit_points;
    trap.Hit_points = this->Hit_points;
    trap.Name = this->Name;
    trap.Attack_damage = this->Attack_damage;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "hahowa twled \n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor ClapTrap is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap)
{
    this->Attack_damage = trap.Attack_damage;
    this->Name = trap.Name;
    this->Energy_points = trap.Energy_points;
    this->Attack_damage = trap.Attack_damage;
    return *this;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
    std::cout << this->Name << ' ' << "are hited effect " << std::endl; 
    if (this->Hit_points <= 0)
        std::cout<< "mat\n"; 

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


void ClapTrap::attack(const std::string& target)
{
    if(Energy_points > 0 && Hit_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << ' ' << "attacks" << ' ' << target << ' ' << "causing 1 points damage!" << std::endl;
        this->Energy_points -= 1;
    }

}
