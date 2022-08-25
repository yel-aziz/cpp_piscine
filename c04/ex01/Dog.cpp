/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/26 00:27:11 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

 Dog:: Dog()
{
    std::cout << "i'm DOG constructor" << std::endl;
    B = new Brain();

}

 Dog::~ Dog()
{
    std::cout << "i'm DOG deconstructor" << std::endl;

}
void Dog::makeSound()
{
    std::cout << "hawww haww" << std::endl;
}
