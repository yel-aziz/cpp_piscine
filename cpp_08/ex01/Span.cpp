/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:07:02 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/25 23:42:51 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int N)
{
    std::cout << "Mon generale notre N est prete" << std::endl;
    this->N = N;
}

Span::Span()
{
    std::cout << "Default constructor Span" << std::endl;
}

Span::~Span()
{
    std::cout << "Default deconstructor Span" << std::endl;
}

void Span::addNumber(int number)
{
    if(this->arr.size() >= this->N)
    {
        throw std::out_of_range("you container is full as fu**");
    }
    this->arr.push_back(number);
}

int Span::shortestSpan()
{
    int tmp = 0;
    int n = 0;
    unsigned int i = 0;
    if(arr.size() < 2)
    {
        throw std::out_of_range("No Span Can Be found");
    }
    sort(arr.begin(),arr.end());
    n = this->arr[1] - this->arr[0];
    while (i < this->N - 1)
    {
        tmp = this->arr[i + 1] - this->arr[i];
        if(tmp < n)
            n = tmp;
        i++;
    }
    return n;
}

int Span::longestSpan()
{
    if(arr.size() < 2)
    {
        throw std::out_of_range("No Span Can Be found");
    }
    typedef std::vector<int>::iterator it;
    it max = max_element(this->arr.begin(),this->arr.end());
    it min = min_element(this->arr.begin(),this->arr.end());
    return std::abs(*max - *min);
}

void Span::addNNumber(int nnumber,int number)
{
    int i = 0;
    if(this->arr.size() >= this->N)
    {
        throw std::out_of_range("you container is full as fu**");
    }
    while (i <= nnumber)
    {
        arr.push_back(number + i);
        i++;
    }    
}