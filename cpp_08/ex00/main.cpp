/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:48:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/25 15:35:19 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> g1;
    g1.push_back(5);
    g1.push_back(10);
    g1.push_back(15);
    int position = easyfind(g1,10);
    std::cout << position << std::endl;
}