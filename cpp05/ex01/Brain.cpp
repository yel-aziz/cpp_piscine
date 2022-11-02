/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:03:57 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/09 15:25:42 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(Brain& brain)
{
    int i = 0;
    while (i <= 100)
    {
        brain.ideas[i] = this->ideas[i];
        i++;
    }
    
}
Brain& Brain::operator=(Brain& brain)
{
    int i = 0;
    while (i <= 100)
    {
        brain.ideas[i] = this->ideas[i];
        i++;
    }
    return *this;
}
Brain::Brain()
{
    
}
Brain::~Brain(){}
