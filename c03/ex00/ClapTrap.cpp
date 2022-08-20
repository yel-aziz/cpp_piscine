/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:56:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/20 20:37:00 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    private :
        std::string Name;
        int Hit_points = 10;
        int Energy_points = 10;
        int Attack_damage = 0;
    public :
        ClapTrap(std::string NAME)
        {
            this->Name = NAME;
        }
        void attack(const std::string& target)
        {
            std::cout << "ClapTrap " << this->Name << "attacks" << std::endl;
        }
        void takeDamage(unsigned int amount)
        {
            this->Hit_points -= amount;
            std::cout << this->Name <<" are hited effect -1 hit point" << std::endl;
        }
        void beRepaired(unsigned int amount)
        {
            this->Energy_points -= 1;
            std::cout << "Repair cost you 1 energy point" << std::endl;
        }
};

int main()
{
    ClapTrap player1("yasir");
    ClapTrap player2("mohamed");
    player2.attack();
    player1->takeDamage(1);
}