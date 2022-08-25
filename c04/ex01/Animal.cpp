/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:06 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/26 00:02:32 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "i'm Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "i'm Animal deconstructor" << std::endl;
}

std::string Animal::getType()
{
    return(this->type);
}

void Animal::makeSound(void)
{
    std::cout << "hayawan" << std::endl;
}