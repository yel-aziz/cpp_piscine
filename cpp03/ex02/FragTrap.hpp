/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:05:43 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/08 13:57:29 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :
        std::string Name;
        int Hit_points;
        int Energy_points;
       int Attack_damage;
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& trap);
        FragTrap& operator=(FragTrap& trap);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif