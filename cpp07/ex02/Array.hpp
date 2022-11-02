/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:35:49 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/24 21:34:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
template <class T>

class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array(){
            array = NULL;
            std::cout << "Default Array constructor" << std::endl;
            }
            
        Array(unsigned int n)
        {
            this->array = new T[n];
            this->size = n;
        }
        Array(Array &obj)
        {
            T *tmp;
            size = obj.Size();
            array = new T[size];
            tmp = obj.getArray();
            for(unsigned int i = 0; i < size; i++)
            {
                array[i] = tmp[i];
            }
            
        }
        T const &operator=(T const& obj)
        {
            T *tmp;
            this->size = obj.Size();
            if(this->array)
                delete [] array;
            array = new T[size];
            tmp = obj.getArray();
            for(unsigned int i= 0; i < size; i++)
            {
                array[i] = tmp[i];
            }
        }
        T &operator[](unsigned int n)
        {
            if(n >= this->size)
                throw (std::out_of_range("out of range "));
            return (this->array[n]);
        }
        ~Array()
        {
            if(array)
                delete [] array;
            std::cout << "Default Array Deconstructor" << std::endl;
        }
        unsigned int Size()
        {
            return this->size;
        }
        T* getArray()
        {
            return this->array;
        }
};


#endif