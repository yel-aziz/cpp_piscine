/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:48:14 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 22:38:17 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP


#include <iostream>
#include <vector>

template<typename T>

int easyfind(T &t,int i)
{
    typename T::iterator it;
    it = std::find(t.begin(),t.end(),i);
    if(it == t.end())
    {
        throw std::exception();
    }
    return *it;
}

#endif