/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:43:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/07 21:32:42 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap1("yassir");
    DiamondTrap trap2("zakaria");

    trap1.attack(trap2.getName());
    trap1.whoAmI();
}