/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:26:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/28 18:05:26 by yel-aziz         ###   ########.fr       */
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
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(std::string type)
{
    this->weapon.setType(type);
}