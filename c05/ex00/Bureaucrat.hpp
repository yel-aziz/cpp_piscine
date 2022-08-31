/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:56:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/08/31 17:31:27 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    
    public :
        Bureaucrat(int x);
        void setGrade(int x);
        const  std::string getName(void);
        int   getGrade(void);
        void GradeTooHighException();
        void  GradeTooLowException();
        void incrementGrade();
        void decrementGrade();
        
};

#endif