/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:29 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/26 00:27:00 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "i'm CAT constructor" << std::endl;
    B = new Brain();
}

Cat::~Cat()
{
    std::cout << "i'm CAT constructor" <<std::endl;

}

void Cat::makeSound()
{
    std::cout << "myaaw myawww" << std::endl;
}