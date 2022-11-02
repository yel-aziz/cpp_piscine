/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:49:00 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 02:47:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cctype>
#include <iostream>
#include <cstring>
#include <string>

class Convert
{
    private:
         std::string str;
    public:
    void ft_parcing(std::string &s);
    void toInt();
    void toFloat();
    void toBool();
    void toChar(std::string& s);
};

#endif