/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:29 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 16:28:53 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Deconstructorr" << std::endl;
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor it set type" << std::endl;
    this->type = type;
}

Cat::Cat(Cat& cat)
{
    cat.type = this->type;
}

Cat& Cat::operator=(Cat& cat)
{
    this->type = cat.type;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "myaaw myawww" << std::endl;
}