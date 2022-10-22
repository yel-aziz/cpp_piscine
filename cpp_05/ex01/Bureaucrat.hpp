/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:01:53 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 22:14:37 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>
class Form;
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    Bureaucrat(Bureaucrat& obj);
    ~Bureaucrat();
    void signForm(Form& form);
     void gradeIncrement();
    void gradeDecerement();
    const std::string getName() const;
    void setGrade(int i);
    Bureaucrat& operator=(Bureaucrat& obj);
    int getGrade() const;
    class GradeTooHighException : public std::runtime_error
    {
        public:
        GradeTooHighException() : runtime_error("Grade is too Hig bo rass"){};

    };
    class GradeTooLowException : public std::runtime_error
    {
       public:
        GradeTooLowException() : runtime_error("Grade is too low bo rass"){};
    };
};

std::ostream& operator<<(std::ostream& cout, Bureaucrat& obj);

#endif