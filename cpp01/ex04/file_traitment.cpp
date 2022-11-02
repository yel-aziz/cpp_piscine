/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_traitment.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:45:27 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/01 13:40:28 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int    ft_traitment(char **av)
{
    std::fstream file_name;
    std::string  out_file;
    std::string  str;
    std::string  s1;
    std::string s2;
    int position;
    s1 = av[2];
    s2 = av[3];
    
    file_name.open(av[1]);
    if (file_name.fail())
    {
        std::cout << "file name is wrong...";
        return (0);
    }

    out_file = std::strcat(av[1],".replace");
    std::ofstream replace;
    replace.open(out_file);
    if(file_name.is_open())
    {
        while (getline(file_name,str))
        {
            position = str.find(s1);
            if(position >= 0)
            {
                str.erase(position, s1.length());
                str.insert(position, s2);
            }
        replace << str << '\n';
        }
    }
    return (1);
}