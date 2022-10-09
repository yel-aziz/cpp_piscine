/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:06 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 16:49:37 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor" << std::endl;
}
Animal::Animal(std::string type)
{
    std::cout << "Animal " << type << " created " << std::endl;
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor" << std::endl;
}

Animal::Animal(Animal& N)
{
    N.type = this->type;
}


std::string Animal::getType()
{
    return(this->type);
}

void Animal::makeSound(void)
{
    std::cout << "hayawan" << std::endl;
}

Animal& Animal::operator=(Animal& Anim)
{
    this->type = Anim.type;
    return *this;
}