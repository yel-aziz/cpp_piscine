/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:05:43 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/23 20:25:09 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
    public :
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);        
        FragTrap();
};
#endif