/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:28:40 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal_Abstract.hpp"
#include "Brain.hpp"

class Dog : public Animal_Abstract
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(Dog& Dog);
        Dog& operator=(Dog& Dog);
        ~Dog();
        void makeSound();
};



#endif