/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_Abstract.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/29 17:40:38 by yel-aziz         ###   ########.fr       */
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
    virtual void makeSound() = 0;
    std::string getType();
    Animal_Abstract();
    ~Animal_Abstract();
};




#endif