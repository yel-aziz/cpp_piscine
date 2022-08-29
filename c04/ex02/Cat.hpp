/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:01 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/29 17:44:05 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal_Abstract.hpp"
#include "Brain.hpp"

class Cat:public Animal_Abstract
{
    private :
        Brain *B;
    public:
    Cat();
    ~Cat();
    void makeSound();

};



#endif