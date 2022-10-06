/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:32 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:31:28 by yel-aziz         ###   ########.fr       */
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
Fixed::Fixed(const int i)
{
    std::cout << "int Constructor is called" << std::endl;
    this->fixed_point = (i << fractionals_bits);
}

Fixed::Fixed(const float i)
{
    std::cout << "Float Constructor is called"  << std::endl;
    this->fixed_point = i * (1 << fractionals_bits);
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member functions called" << std::endl;
    return(this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawsBits member functions called" << std::endl;
    this->fixed_point = raw;
}

int Fixed::toInt(void) const
{
    int j;
    j = ((int)fixed_point >> fractionals_bits);
    return (j);
}

float Fixed::toFloat(void) const
{
    return ((float)fixed_point / (1 << fractionals_bits));
}

std::ostream &operator<<(std::ostream& ost , Fixed const & fix )
{
    ost << fix.toFloat();
    return ost;
}