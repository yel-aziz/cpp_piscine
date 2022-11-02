/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:10:01 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/24 01:16:30 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

template <class A>

void swap(A &i,A &j)
{
    A tmp;

    tmp = i;
    i = j;
    j = tmp;
}
template <class B>

B min(B &i,B &j)
{
    if(i < j)
        return i;
    if(i > j)
        return j;
    if(i == j)
        return j;
    return i;
}
template <class c>

c max(c &i,c &j)
{
    if(i > j)
        return i;
    if(i < j)
        return j;
    if(i == j)
        return j;
    return i;
}

#endif