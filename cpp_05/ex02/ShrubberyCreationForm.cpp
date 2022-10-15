/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:46:37 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/10/15 22:38:12 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name,"ShrubberyCreationForm",137,145)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getIndice() == false) throw FormNotSigned();
    else if(executor.getGrade() >= this->getGradeForm())
    {
        std::string n1 =  "'.,";
        std::string n2 = " 'b      *";
        std::string n3 = " '$    #.";
        std::string n4 =  "   $:   #:";
        std::string n5 = " *#  @):";
        std::string n6 =     ":@,@):   ,.**:'";
        std::string n7 = " ,         :@@*: ..**'";
        std::string n8 =  "'#o.    .:(@'.@*";
        std::string n9 = "'bq,..:,@@*'   ,*";
        std::string n10 = " ,p$q8,:@)'  .p*'";
        std::string n11 = " '    '@@Pp@@*'";
        std::string n12 = "Y7'.'";
        std::string n13 = ":@):.";
        std::string n14 = " .:@:'.";
        std::string n15 = ".::(@:.";
        
        std::ofstream outfile(this->getTarget() + "_shrubbery");
        
    }
    
}
