/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:29 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:43:38 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal_Abstract("Cat")
{
    std::cout << "Cat constructor" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Deconstructorr" << std::endl;
    delete this->brain;
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor it set type" << std::endl;
    this->type = type;
    this->brain = new Brain();
}

Cat::Cat(Cat& cat)
{
    this->type = cat.type;
    this->brain = cat.brain;
}

Cat& Cat::operator=(Cat& cat)
{
    
    this->type = cat.type;
    this->brain = new Brain(*cat.brain);
    return *this;
}

void Cat::makeSound()
{
    std::cout << "myaaw myawww" << std::endl;
}