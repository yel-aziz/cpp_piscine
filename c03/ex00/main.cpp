/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:43:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/21 18:43:37 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main()
{
    ClapTrap player1("yassir");
    ClapTrap player2("mohamed");
    player2.attack(player1.getName());
    player1.takeDamage(1);
    player1.beRepaired(1);
    player2.attack(player1.getName());
    player1.attack(player2.getName());
    player2.takeDamage(1);
}