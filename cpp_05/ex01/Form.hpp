/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/13 15:09:58 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    bool  indice;
    const int gradesign;
    const int gradeForm;
    
public:
    Form();
    Form(std::string name, int grade, bool indice, int sign);
    Form(Form& obj);
    Form& operator=(Form& obj);
    std::string getName();
    int getIndice();
    int getGradeForm();
    int getGradeSign();
    void beSigned(Bureaucrat& obj);
    ~Form();
    class GradeTooHighException : public std::runtime_error
    {
        public :
            GradeTooHighException() : runtime_error("Grade is too High"){};
    };
    class GradeTooLowException : public std::runtime_error
    {
        public :
            GradeTooLowException() : runtime_error("Grade is too Low"){};
    };
    
};

std::ostream& operator<<(std::ostream& ost, Form& fr);

#endif