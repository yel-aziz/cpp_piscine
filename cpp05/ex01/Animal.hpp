/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 16:52:01 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>



class Animal
{
    protected:
        std::string type;
    public:
    Animal();
    Animal(std::string type);
    Animal(Animal& N);
    Animal& operator=(Animal& Anim);
    virtual ~Animal();
    virtual void makeSound();
    std::string getType();
};


#endif