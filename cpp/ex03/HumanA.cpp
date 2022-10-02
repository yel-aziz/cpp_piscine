/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:25:12 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 14:37:38 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void    HumanA::setName(std::string name)
{
    this->name = name;
}

void   HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->pwn.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : pwn(weapon) , name(name)    {}
