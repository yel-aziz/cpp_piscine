/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:50:51 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/28 18:18:10 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *zom[N];
    int     i = 0;

    while (i < N)
    {
        zom[i] = new Zombie();
        i++;
    }
    N -= 1;
    while (N >= 0)
    {
       zom[N]->setName(name);
       zom[N]->announce();

       N--;
    }
    return(*zom);
}