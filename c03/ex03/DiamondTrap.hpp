/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:54:50 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/23 18:36:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:virtual public ScavTrap,FragTrap
{
    private:
        std::string name = name;
    public:
    unsigned int Hit_Points = FragTrap::getHitPoints();
    unsigned int energyPoints = ScavTrap::getEnergyPoints();
    unsigned int AttackDamage = FragTrap::getAttackDamage();
    
};
#endif