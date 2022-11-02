/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:50:40 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 22:17:04 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool is_digit(std::string s)
{
    int i = -1;
    while (s[++i])
    {
        if (i == 0 && s[i] == '-')
            continue;
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}

void Convert::ft_parcing(std::string& s)
{
        int i = 0;
        if(s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf" || s == "+inf" || s == "nan")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf"  << std::endl;
            std::cout << "double: nan"  << std::endl;
        }
        else if(s.length() == 1 && isalpha(s[0]))
        {
            int c = static_cast<int>(s[0]);
            char v = static_cast<char>(s[0]);
            float s = static_cast<float>(c);
            double d = static_cast<double>(c);
            if(c < 32 || c > 127)
            {
                std::cout << "char: non diplayabel" << std::endl;
                std::cout << "int: " << c << std::endl;
                std::cout << "float: "<< s  << ".0f"<< std::endl;
                std::cout << "double: "<< d << std::endl;
                return;
            }
            std::cout << "char: "<< v << std::endl;
            std::cout << "int: " << c << std::endl;
            std::cout << "float: "<< s  << ".0f"<< std::endl;
            std::cout << "double: "<< d << std::endl;
            return;
        }
        else if(is_digit(s))
        {
            int data = atoi(s.c_str());
            int c = static_cast<int>(data);
            char v = static_cast<char>(c);
            float s = static_cast<float>(c);
            double d = static_cast<double>(c);
            if(c < 32 || c > 127)
            {
                std::cout << "char: non displayabel" << std::endl;
                std::cout << "int: " << c << std::endl;
                std::cout << "float: "<<s  << ".0f"<< std::endl;
                std::cout << "double: "<< d << std::endl;
                return ;
            }
            std::cout << "char: "<<v << std::endl;
            std::cout << "int: " << c << std::endl;
            std::cout << "float: "<<s  << ".0f"<< std::endl;
            std::cout << "double: "<< d << std::endl;
        }
        else if(isnumber(s[i]) && s[s.length() - 1] == 'f')
        {
            float data = strtof(s.c_str(), NULL);
            int c = static_cast<int>(data);
            char v = static_cast<char>(data);
            double d = static_cast<double>(data);
            if(c < 32 || c > 127)
            {
                std::cout << "char: non displayabel" << std::endl;
                std::cout << "int: " << c << std::endl;
                std::cout << "float: "<< s << std::endl;
                std::cout << "double: "<< d << std::endl;
                return ;
            }
            std::cout << "char: "<< v << std::endl;
            std::cout << "int: " << c << std::endl;
            std::cout << "float: "<< s << std::endl;
            std::cout << "double: "<< d << std::endl;
        }
        else if(s[s.length() - 1] != 'f')
        {
            double data = strtod(s.c_str(), nullptr);
            int c = static_cast<int>(data);
            char v = static_cast<char>(data);
            float s = static_cast<float>(data);
            double d = static_cast<double>(data);
            if(c < 32 || c > 127)
            {
                std::cout << "char: non displayabel" << std::endl;
                std::cout << "int: " << c << std::endl;
                std::cout << "float: "<< s << std::endl;
                std::cout << "double: "<< d << std::endl;
                return ;
            }
            std::cout << "char: "<< v << std::endl;
            std::cout << "int: " << c << std::endl;
            std::cout << "float: "<< s  << std::endl;
            std::cout << "double: "<< d << std::endl;
        }
}
