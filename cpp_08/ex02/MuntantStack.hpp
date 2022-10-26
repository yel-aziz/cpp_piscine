/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuntantStack.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:54:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 18:27:03 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, class container=std::deque<T> >;

class MuntantStack : std::stack<T,container>
{
private:
    /* data */
public:
    MuntantStack(/* args */);
    
    ~MuntantStack();
};

MuntantStack::MuntantStack(/* args */)
{
}

MuntantStack::~MuntantStack()
{
}

#endif

