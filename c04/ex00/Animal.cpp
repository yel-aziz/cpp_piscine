/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:06 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/25 23:45:01 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::~Animal()
{
}

std::string Animal::getType()
{
    return(this->type);
}

void Animal::makeSound(void)
{
    std::cout << "hayawan" << std::endl;
}