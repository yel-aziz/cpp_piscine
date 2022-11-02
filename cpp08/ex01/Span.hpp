/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:07:04 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 22:24:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int N;
   std::vector<int> arr;
public:
    Span(unsigned int N);
    Span();
    Span(Span &obj);
    Span &operator=(Span &obj);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    void addNNumber(int nNumber,int number);
    ~Span();
};




#endif