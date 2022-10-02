/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:04:27 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/27 22:17:30 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>
#include<new>


class Zombie
{
    private :
    std::string name;
    public :
        void announce( void );
        void setName(std::string name);
        std::string getName();
        ~Zombie();
};

Zombie*    zombieHorde( int N, std::string name );
#endif
