/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:48:36 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 20:53:02 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


Data::Data(std::string name, int salair)
{
    this->name = name;
    this->salair = salair;
}

Data::~Data()
{
    std::cout << "deconstructor is called" << std::endl;
}

void Data::printData()
{
    std::cout << this->name << " " << this->salair << std::endl;
}

uintptr_t serialize(Data* ptr)
{
    if(!ptr)
    {
        std::cout << "you try to segfault my code angry face" << std::endl;
        exit(0);
    }
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
     if(!raw)
    {
        std::cout << "you try to segfault my code angry face" << std::endl;
        exit(0);
    }
    return reinterpret_cast<Data *>(raw);
}
