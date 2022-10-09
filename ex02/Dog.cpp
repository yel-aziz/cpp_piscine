/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:44:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

 Dog:: Dog() : Animal_Abstract("Dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->brain = new Brain();
}

 Dog::~Dog()
{
    std::cout << "Dog Deconstructor is called" << std::endl;
    delete this->brain;
}

Dog::Dog(std::string type)
{
    this->type = type;
}

Dog::Dog(Dog& dog)
{
    this->type = dog.type;
    this->brain = dog.brain;
}

Dog& Dog::operator=(Dog& Dog)
{
    this->type = Dog.type;
    if(this->brain)
        return (*this);
    this->brain = new Brain(*Dog.brain);
    return *this;
}

void Dog::makeSound()
{
    std::cout << "hawww haww" << std::endl;
}
