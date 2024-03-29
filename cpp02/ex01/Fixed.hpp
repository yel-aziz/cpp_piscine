/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:31:22 by yel-aziz         ###   ########.fr       */
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
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream& ost , Fixed const & fix );

#endif
