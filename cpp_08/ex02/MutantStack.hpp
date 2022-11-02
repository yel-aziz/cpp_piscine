/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:54:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/26 22:29:38 by yel-aziz         ###   ########.fr       */
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
    MutantStack()
    {
        std::cout << "default constructor" << std::endl;
    }
    MutantStack(MutantStack &obj)
    {
       *this = obj;
            
    }
    MutantStack &operator=(MutantStack &obj)
    {
        if(this == &obj)
            return *this;
        *this = obj;
        return (*this);
    }
    ~MutantStack()
    {
        std::cout << "default econstructor" << std::endl;
    }
    typedef typename c::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    
};

#endif

