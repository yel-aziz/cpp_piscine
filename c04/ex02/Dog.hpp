/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/29 17:44:26 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal_Abstract.hpp"
#include "Brain.hpp"

class Dog : public Animal_Abstract
{
    private :
        Brain *B;
    public:
     Dog();
    ~ Dog();
    void makeSound();
};



#endif