/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:05:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int fixed_point;
        static const int fractionals_bits = 8;
    public :
    Fixed();
    Fixed(const Fixed &Fixed);
    Fixed(const int i);
    Fixed(const float i);
    Fixed & operator=(const Fixed & obj)
    {
        std::cout << "copy assingnement opperator called" << std::endl;
        this->fixed_point = obj.fixed_point;
        return *this;
    }
    ~Fixed();
    int getRawBits(void);
    void setRawBits(int const raw);
    Fixed operator>(Fixed &fix);
    Fixed operator<(Fixed &fix);
    Fixed operator >=(Fixed &fix);
    Fixed operator <=(Fixed& fix);
    Fixed operator ==(Fixed& fix);
    Fixed operator !=(Fixed& fix);
    Fixed operator+(Fixed& fix);
    Fixed operator-(Fixed& fix);
    Fixed operator*(const Fixed& fix);
    Fixed operator/(Fixed& fix);
    static Fixed&  min(Fixed& fix1, Fixed& fix2);
    const static Fixed&  min(const Fixed& fix1, const Fixed& fix2);
    const static Fixed& max(const Fixed& fix1, const Fixed& fix2);
    static Fixed& max(Fixed& fix1, Fixed& fix2);
    Fixed operator --();
    Fixed operator --(int);
    Fixed operator ++(int);
    Fixed operator++();
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream& ost , Fixed const & fix );

#endif
