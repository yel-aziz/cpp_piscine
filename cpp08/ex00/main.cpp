/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:48:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/25 16:50:15 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <set>
#include <map>
int main()
{
    std::vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(9524);
    v1.push_back(0);
    v1.push_back(23);
    int position;

    try
    {
        position = easyfind(v1,1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "position not found!!!!!" << '\n';
        return 0;
    }
    std::cout << "your occurence position " << position << std::endl;

    std::set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(9524);
    s1.insert(0);
    s1.insert(23);
    int positions;
    try
    {
        positions = easyfind(s1,0);
    }
    catch(const std::exception& e)
    {
        std::cerr << "position not found!!!!!" << '\n';
        return 0;
    }
    std::cout << "your occurence position " << positions << std::endl;
}