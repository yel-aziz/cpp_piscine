/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:43:50 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/21 19:01:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

#include <iostream>

class ClapTrap
{
    private :
        std::string Name;
        int Hit_points = 10;
        unsigned int Energy_points = 10;
        unsigned int Attack_damage = 0;
    public :
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void);
};

#endif