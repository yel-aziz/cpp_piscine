/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:13:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 17:47:46 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal_Abstract *A[2];
    A[0] = new Dog();
    A[1] = new Cat();
    A[0]->makeSound();
    A[1]->makeSound();
    delete A[0];
    delete A[1];
}