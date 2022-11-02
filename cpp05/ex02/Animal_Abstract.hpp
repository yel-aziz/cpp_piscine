/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_Abstract.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:38:04 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_ABSTRACT_HPP
#define ANIMAL_ABSTRACT_HPP

#include <iostream>

class Animal_Abstract
{
    protected:
        std::string type;
    public:
        Animal_Abstract();
        Animal_Abstract(std::string name);
        Animal_Abstract(Animal_Abstract& obj);
        Animal_Abstract& operator=(Animal_Abstract& obj);
        virtual void makeSound() = 0;
        virtual ~Animal_Abstract();
        std::string getType();
};


#endif