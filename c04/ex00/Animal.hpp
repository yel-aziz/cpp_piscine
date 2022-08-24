/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/24 14:46:59 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

class Animal
{
    protected:
        std::string type;
       virtual void makeSound();
    public:
    std::string getType();
    Animal();
    ~Animal();
};




#endif