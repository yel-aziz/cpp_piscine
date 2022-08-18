/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:14:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/18 20:33:18 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <bits/stdc++.h>
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
    Fixed(const int i);
    Fixed(const float n);
    int getRawBits(void);
    void setRawBits(int  raw);
    float toFloat(void) const;
    int toInt(void) const;
};

#endif