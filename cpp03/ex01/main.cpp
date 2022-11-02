/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:43:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/07 20:29:39 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("yassir");
    ClapTrap s2("mohammed");
    s1.attack(s2.getName());
    ScavTrap s3("fati");
    s3.attack(s2.getName());
    s1.guardGate();
}