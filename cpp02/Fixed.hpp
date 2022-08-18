/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:14:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/18 19:40:15 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
class Fixed
{
    private:
    int fixed_point;
    static const int statich_point = 8;
    public:
    Fixed();
    Fixed(const Fixed& apah);
    Fixed(int i);
    ~Fixed();
    int getRawBits(void);
    void setRawBits(int  raw);
};

#endif