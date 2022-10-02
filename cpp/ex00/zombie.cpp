/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:55:44 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 14:11:10 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"




void Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ...";
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return(this->name);
}

Zombie::~Zombie()
{
    std::cout << "\n" <<this->name << " deconstructed" << std::endl;
}