/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:32 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:25:42 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &Fixed)
{
    this->fixed_point = Fixed.fixed_point;
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const int i)
{

    this->fixed_point = (i << fractionals_bits);
}

Fixed::Fixed(const float i)
{
    this->fixed_point = i * (1 << fractionals_bits);
}

int Fixed::getRawBits(void)
{
    return(this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed Fixed::operator >(Fixed& fix)
{
    return (this->fixed_point > fix.fixed_point);
}

Fixed Fixed::operator <(Fixed& fix)
{
    return (this->fixed_point < fix.fixed_point);
}

Fixed Fixed::operator >=(Fixed& fix)
{
    return(this->fixed_point >= fix.fixed_point);
}

Fixed Fixed::operator <=(Fixed& fix)
{
    return(this->fixed_point <= fix.fixed_point);
}

Fixed Fixed::operator ==(Fixed& fix)
{
    return(this->fixed_point == fix.fixed_point);
}

Fixed Fixed::operator !=(Fixed& fix)
{
    return (this->fixed_point != fix.fixed_point);
}

Fixed Fixed::operator+(Fixed& fix)
{
    return (this->fixed_point + fix.fixed_point);
}
Fixed Fixed::operator-(Fixed& fix)
{
    return (this->fixed_point - fix.fixed_point);
}

Fixed Fixed::operator*(const Fixed& fix)
{
    return (this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(Fixed& fix)
{
    return (this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator ++(int)
{
    Fixed a;
    a.setRawBits(this->fixed_point);
    this->fixed_point++;
    return a;
}

Fixed Fixed::operator ++()
{
    Fixed a;
    this->fixed_point += 1;
    a.setRawBits(this->fixed_point);
    return a;

}

Fixed Fixed::operator --()
{
    Fixed a;
    this->fixed_point--;
    a.setRawBits(this->fixed_point);
    return a;
}

Fixed Fixed::operator --(int)
{
    Fixed a;
    a.setRawBits(this->fixed_point);
    this->fixed_point--;
    return a;
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if(fix1.fixed_point > fix2.fixed_point)
        return fix2;
        
    return  fix1;
}

const Fixed& Fixed::min(const Fixed& fix1, const  Fixed& fix2)
{
    if(fix1.fixed_point > fix2.fixed_point)
        return fix2;
        
    return  fix1;
}

const Fixed& Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    return fix1.fixed_point > fix2.fixed_point ? fix1 : fix2;
}

Fixed& Fixed::max(Fixed &fix1, Fixed &fix2)
{
    return fix1.fixed_point > fix2.fixed_point ? fix1 : fix2;
}