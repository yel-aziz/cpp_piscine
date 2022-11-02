/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:43:29 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 21:25:13 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


int main()
{
    Data *a = new Data("yassir",2500);
    uintptr_t p;
    a->printData();
    p = serialize(a);
    a = deserialize(0);
    a->printData();
}