/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:43:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/06 16:27:39 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1("yassir");
    ClapTrap player2("mohamed");
    
    player1.attack(player1.getName());
    player2.takeDamage(5);
    player2.attack(player1.getName());
}