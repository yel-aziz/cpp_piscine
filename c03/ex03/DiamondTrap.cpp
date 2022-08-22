/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 23:44:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/22 23:54:46 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap:public FragTrap,ClapTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    ClapTrap::Name;
    FragTrap::
    
    ~DiamondTrap();
};

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
}

DiamondTrap::~DiamondTrap()
{
}
