/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:33:47 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/17 00:00:08 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    // PresidentialPardonForm(PresidentialPardonForm& pre);
    // PresidentialPardonForm& operator=(PresidentialPardonForm& pre);
    ~PresidentialPardonForm();
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
    class FormNotSigned : public std::exception
    {
        public :
            // FormNotSigned() : runtime_error("Form Not Signed"){};
            const char *what() const throw(){
                return "errordslkdsj";
            }
    };
};

#endif