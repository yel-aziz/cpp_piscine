/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:08:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/05 21:34:54 by yel-aziz         ###   ########.fr       */
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
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void operator=(Fixed &fix)
    {
        std::cout << "copy assingnement opperator called" << std::endl;
        this->fixed_point = fix.fixed_point;
    };
};

#endif
