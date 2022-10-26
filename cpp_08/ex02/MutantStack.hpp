/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:54:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 20:35:11 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>

template <typename T , class c = std::deque<T> >

class MutantStack : public std::stack<T,c>
{
    private:
    public:
    MutantStack();
    MutantStack(MutantStack &obj);
    MutantStack &operator=(MutantStack &obj);
    ~MutantStack();
    typedef typename c::iterator iterator;
    // void push(int n)
    // {
    //    MutantStack->push(n);
    // }
    int pop()
    {
        return (this->c.pop());
    }
    // int size()
    // {
    //     return MutantStack.size();
    // }
    // int top()
    // {
    //     return MutantStack.top();
    // }
    // iterator begin()
    // {
    //     return MutantStack.begin();
    // }
    // iterator end()
    // {
    //     return MutantStack.end();
    // }
    
};

#endif

