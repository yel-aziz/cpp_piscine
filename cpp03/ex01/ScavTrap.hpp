/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:09:28 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 13:50:13 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap :  public ClapTrap
{
    private :
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& trap);
        ScavTrap& operator=(ScavTrap& trap);
        ~ScavTrap();
        void guardGate();
};

#endif