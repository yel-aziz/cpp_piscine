/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:28:57 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/26 21:08:00 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cctype>
#include <unistd.h>
#include <string>
#include <string.h>

class Contact
{
	public :
		Contact(std::string first_Name, std::string last_Name, std::string nick_Name, std::string phone_Number, std::string darkest_Secret);
	
	private :
		std::string first_Name;
		std::string last_Name;
		std::string nick_Name;
		std::string darkest_Secret;
		std::string	phone_Number;
	
	public :
    std::string getName();
    std::string getLastName();
    std::string getPhone_Number();
    std::string getNick_name();
    std::string getDarkest_secret();
    void setName(std::string first_Name);
    void setLastName(std::string last_Name);
    void setNickName(std::string nick_Name);
    void setDarkest_Secret(std::string darkest_Secret);
    void setPhone_Number(std::string phone_Number);
	
};

class PhoneBook
{
    public :
        PhoneBook();
        
	public :
    void print_str(std::string contact);
    void entrydata();
};

#endif