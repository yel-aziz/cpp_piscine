/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:26:49 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/28 18:21:40 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define  HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon weapon;
    public :
        HumanB();
        HumanB(std::string name);
        void    setName(std::string name);
        void    attack();
        void    setWeapon(std::string type);
};

#endif