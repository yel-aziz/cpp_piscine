/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:57:35 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/24 21:20:26 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template <typename C>

void iter(C  *array, size_t lenght, void(*f)(C const &s))
{
    size_t j = 0;

    while (j <= lenght)
    {
        f(array[j++]);
    }
}

#endif