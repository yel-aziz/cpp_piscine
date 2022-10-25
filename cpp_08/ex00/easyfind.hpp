/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:48:14 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/25 15:41:00 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP


#include <iostream>
#include <vector>
template<typename T>

int easyfind(T &t,int i)
{
    typename T::iterators it;
    it = find(t.beign(),t.end(),i);
    if(it == t.end())
    {
        throw std::exception();
    }
    return *it;
}

#endif