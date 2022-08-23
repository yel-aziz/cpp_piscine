/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:22:00 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/23 18:34:05 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in GateKeeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    setName(name);
}

unsigned int ScavTrap::getEnergyPoints()
{
    return(ClapTrap::getEnergyPoints());
}