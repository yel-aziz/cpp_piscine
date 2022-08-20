/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:56:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/21 00:40:32 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    private :
        std::string Name;
        int Hit_points = 10;
        unsigned int Energy_points = 10;
        unsigned int Attack_damage = 0;
    public :
        ClapTrap(std::string NAME)
        {
            this->Name = NAME;
        }
        void attack(const std::string& target)
        {
            if(Energy_points > 0 && Hit_points > 0)
            {
                std::cout << "ClapTrap " << this->Name << ' ' << "attacks" << ' ' << target << ' ' << "causing 1 points damage!" << std::endl;
                this->Energy_points -= 1;
            }
        }
        void takeDamage(unsigned int amount)
        {
            this->Hit_points -= amount;
            this->Energy_points -= 1;
            std::cout << this->Name << ' ' << "are hited effect " << std::endl;
        }
        void beRepaired(unsigned int amount)
        {
            Hit_points += amount;
            this->Energy_points -= 1;
            std::cout << "Repair cost you 1 energy point" << std::endl;
        }
        std::string getName()
        {
            return(this->Name);
        }
};

int main()
{
    ClapTrap player1("yassir");
    ClapTrap player2("mohamed");
    player2.attack(player1.getName());
    player1.takeDamage(1);
}