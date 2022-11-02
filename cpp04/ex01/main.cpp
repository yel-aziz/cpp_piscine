/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:13:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 18:10:13 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *Anim[6];
    int  i = 0;
    while (i < 3)
    {
        Anim[i] = new Cat();
        Anim[i]->makeSound();
        i++;
    }
    while (i < 6)
    {
        Anim[i] = new Dog();
        Anim[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 6)
    {
       Anim[i]->~Animal();
       i++;
    }
}