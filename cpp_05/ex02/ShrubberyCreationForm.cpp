/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:46:37 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/16 02:08:32 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name,"ShrubberyCreationForm",137,145)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getIndice() == false) throw FormNotSigned();
    if(executor.getGradeExec() >= this->getGradeForm()) throw GradeTooLowException();
    {
        std::string n1 = "      _-_";
        std::string n2 = "   /~~   ~~\\";
        std::string n3 = "/~~         ~~\\";
        std::string n4 = "{              }";
        std::string n5 = "  \\_-     -_  /";
        std::string n6 = "   ~ \\\\ //  ~";
        std::string n7 = "_- -  | | _- _";
        std::string n8 = "  _ - | |   -_";
        std::string n9 = "     // \\\\";
        
        std::ofstream outfile(this->getTarget() + "_shrubbery");
        outfile << n1 << "\n" << n2 << "\n" << n3 << "\n" << n4 << "\n" << n5 << "\n"  << n6 << "\n" << n7 << "\n"
                    << n8<<"\n"<<n9<<"\n";
        
    }
    
}
