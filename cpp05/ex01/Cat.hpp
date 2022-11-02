/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:01 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 18:26:34 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private :
        Brain *brain;
    public:
    Cat();
    Cat(std::string type);
    Cat(Cat& cat);
    Cat& operator=(Cat& cat);
    ~Cat();
    void makeSound();
};



#endif