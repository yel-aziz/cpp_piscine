/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:26:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 14:33:24 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

void   HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & weapon)
{
    this->weapon = &weapon;
}