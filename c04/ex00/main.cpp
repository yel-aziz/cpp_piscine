/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:56:44 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/25 23:20:07 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
//onst Animal* meta = new Animal();
//const Animal* j = new Dog();
Animal *i = new Cat();
/*std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;*/
i->makeSound(); //will output the cat sound!
//j->makeSound();
//meta->makeSound();
}