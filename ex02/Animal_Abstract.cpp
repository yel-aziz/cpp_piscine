/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_Abstract.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:35:26 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:44:56 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_Abstract.hpp"


Animal_Abstract::~Animal_Abstract()
{
    std::cout << "i'm Animal deconstructor" << std::endl;
}

std::string Animal_Abstract::getType()
{
    return(this->type);
}

Animal_Abstract::Animal_Abstract(std::string name)
{
    std::cout << "i'm Animal constructor" << std::endl;
    this->type = name;
}

Animal_Abstract::Animal_Abstract()
{
    std::cout << "i'm Animal constructor" << std::endl;
}

Animal_Abstract::Animal_Abstract(Animal_Abstract& obj)
{
    this->type = obj.type;
}

Animal_Abstract& Animal_Abstract::operator=(Animal_Abstract& obj)
{
    this->type = obj.type;
    return *this;
}

