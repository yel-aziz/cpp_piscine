/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:50:51 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/02 16:01:55 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *zom = new Zombie[N];
    int     i;
    
    i = 0;
    while (i < N)
    {
       zom[i].setName(name);
       zom[i].announce();
       i++;
    }
    return(zom);
}