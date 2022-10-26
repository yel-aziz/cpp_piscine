/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:54:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 21:58:39 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>

template <typename T , class c = std::stack<T> >

class MutantStack : public std::stack<T,c>
{
    private:
    public:
    // MutantStack();
    // MutantStack(MutantStack &obj);
    // MutantStack &operator=(MutantStack &obj);
    // ~MutantStack();
    typedef typename std::stack<T>::container_type::iterator iterator;
    void push(int n)
    {
       this->c.push(n);
    }
    int pop()
    {
        return (this->c.pop());
    }
    int size()
    {
        return this->c.size();
    }
    int top()
    {
        return this->c.top();
    }
    iterator begin()
    {
        return this->begin();
    }
    // iterator end()
    // {
    //     return this->c.end();
    // }
    
};

#endif

