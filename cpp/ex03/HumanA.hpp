/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:33:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 14:30:38 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define  HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private :
        Weapon &pwn;
        std::string name;
    public :

        HumanA(std::string name, Weapon &weapon);
        void   setName(std::string name);
        void   attack();
};

#endif