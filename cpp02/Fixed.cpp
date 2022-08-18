/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:36:45 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/18 18:08:30 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int fixed_point;
public:
    Fixed()
    {
        this->fixed_point = 0;
        std::cout << "Default constructor called" << std::endl;
    }
    Fixed(const Fixed &apah)
    {
        this->fixed_point = apah.fixed_point;
        std::cout << "Copy constructor called" << std::endl;
    }
    Fixed(int i)
    {
        this->fixed_point = i;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    ~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }
    int getRawBits()
    {
        std::cout << "getRawBits member function called" << std::endl;
        return(this->fixed_point);

    }
    void setRawBits(int const raw)
    {
        this->fixed_point = raw;
    }
};

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
