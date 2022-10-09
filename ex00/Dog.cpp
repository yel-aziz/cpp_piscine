/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 16:50:02 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

 Dog:: Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
}

 Dog::~ Dog()
{
    std::cout << "Dog Decnstructor is called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
}
Dog::Dog(Dog& Dog)
{
    Dog.type = this->type;
}

Dog& Dog::operator=(Dog& Dog)
{
    this->type = Dog.type;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "hawww haww" << std::endl;
}
