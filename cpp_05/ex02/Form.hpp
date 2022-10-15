/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:03:48 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/15 22:37:53 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    const std::string fTarget;
    bool  indice;
    const int gradesign;
    const int gradeForm;
    
public:
    Form() ;
    Form(std::string target ,std::string name, int grade,int sign);
    Form(Form& obj);
    Form& operator=(Form& obj);
    std::string getName();
    bool getIndice() const;
    int getGradeForm() const;
    void beSigned(Bureaucrat &obj);
    int getGradeSign();
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const = 0;
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