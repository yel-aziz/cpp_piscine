/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:26:27 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/23 21:46:04 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
    private:
    public:
    Base();
    virtual ~Base();
};
class A : public Base
{
    
};

class B :public Base
{
    
};

class C : public Base
{
    
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif