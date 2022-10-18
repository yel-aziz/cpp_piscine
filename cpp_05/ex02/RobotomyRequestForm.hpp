/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:51:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 17:27:16 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm& obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
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
    class FormNotSigned : public std::runtime_error
    {
        public :
            FormNotSigned() : runtime_error("Form Not Signed"){};
    };
};



#endif