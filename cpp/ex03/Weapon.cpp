/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:24:20 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 14:21:18 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon()
{}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
 std::string Weapon::getType()
 {
     std::string& typereference = this->type;
     return(typereference);
 }
 
 void  Weapon::setType(std::string type)
 {
     
    this->type = type;
 }