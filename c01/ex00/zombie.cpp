/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:55:44 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/27 15:08:49 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class Zombie
{
    private :
    std::string name;
    public :
    void announce( void )
    {
        std::cout << name << " BraiiiiiiinnnzzzZ...";
    }
    public :
        void setName(std::string name)
        {
            this->name = name;
        }
      public :
        void getName()
        {
            return(this->name);
        }
};