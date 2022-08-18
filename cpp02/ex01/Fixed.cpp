/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:36:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/18 20:26:20 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& apah)
{
    this->fixed_point = apah.fixed_point;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int i)
{
    this->fixed_point = i;
    std::cout << "Copy assignment operator called" << std::endl;
}

Fixed:: ~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_point);
}

Fixed::Fixed(const int i)
{
    this->fixed_point = i;
}
Fixed::Fixed(const float n)
{
    this->fixed_point = floor(n);
}
void Fixed::setRawBits(int raw)
{
    this->fixed_point = raw;
}

float Fixed::toFloat(void)
{
    this->fixed_point = (int)this->fixed_point;
}

int Fixed::toInt(void)
{
    this->fixed_point = (int)this->fixed_point;
}
