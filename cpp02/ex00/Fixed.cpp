/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:32 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:27:37 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout << "copy constructor called" << std::endl;
    this->fixed_point = Fixed.fixed_point;
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member functions called" << std::endl;
    return(this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawsBits member functions called" << std::endl;
    this->fixed_point = raw;
}
