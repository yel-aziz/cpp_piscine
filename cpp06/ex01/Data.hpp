/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:48:34 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 20:52:29 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
private:
    std::string  name;
    int salair;
public:
    Data(std::string name, int salaire);
    void printData();
    ~Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif