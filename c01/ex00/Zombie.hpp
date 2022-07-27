/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:04:27 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/27 15:13:23 by yel-aziz         ###   ########.fr       */
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
    public :
        void setName(std::string name);
    public :
        void getName();
};

#endif
