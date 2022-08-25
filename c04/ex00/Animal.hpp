/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/25 19:38:35 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#include "Cat.hpp"


class Animal
{
    protected:
        std::string type;
    public:
    virtual void makeSound();
    std::string getType();
    Animal();
    ~Animal();
};




#endif