/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:43:37 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/26 21:13:40 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(std::string first_Name, std::string last_Name, std::string nick_Name, std::string phone_Number, std::string darkest_Secret)
{
	{
		this->first_Name = first_Name;
		this->last_Name = last_Name;
		this->nick_Name = nick_Name;
		this->phone_Number = phone_Number;
		this->darkest_Secret = darkest_Secret;
	}
}
std::string Contact::getName()
{
	return first_Name;
}
std::string Contact::getLastName()
{
	return last_Name;
}
std::string Contact::getPhone_Number()
{
	return phone_Number;
}
std::string Contact::getNick_name()
{
	return nick_Name;
}
std::string Contact::getDarkest_secret()
{
	return darkest_Secret;
}
void Contact::setName(std::string first_Name)
{
	this->first_Name = first_Name;
}
void Contact::setLastName(std::string last_Name)
{
	this->last_Name = last_Name;
}
void Contact::setNickName(std::string nick_Name)
{
	this->nick_Name = nick_Name;
}
void Contact::setDarkest_Secret(std::string darkest_Secret)
{
	this->darkest_Secret = darkest_Secret;
}
void Contact::setPhone_Number(std::string phone_Number)
{
	this->phone_Number = phone_Number;
}

PhoneBook::PhoneBook(){};
void PhoneBook::print_str(std::string contact)
{
	unsigned long i;
	i = 0;
	if (contact.length() < 10)
	{
		std::cout << ' ' << contact;
		while (i < 10 - contact.length())
		{
			std::cout << " ";
			i++;
		}
		std::cout << '|';
		}
		else
		std::cout  << ' ' << contact.substr(0, 9) + '.' << '|';
}

void	PhoneBook::entrydata()
{
		std::string first_Name;
		std::string last_Name;
		std::string nick_Name;
		std::string darkest_Secret;
		std::string	phone_Number;
		int	number_choice;
		Contact *contact[8];		
		int	i;
		int	j;
		int k;
		i = -1;
		j = 0;
		std::string choice;
		while (choice != "EXIT")
		{
			std::cout << "ENTRE YOUT CHOICE : ADD OR EXIT OR SEARCH"<< std::endl;
			std::cin >> choice;
			if(choice == "ADD")
			{
				std::cout << "enter first_Name : ";
				std::cin >> first_Name;
				std::cout << "enter last_Name : ";
				std::cin >> last_Name;
				std::cout << "enter nick_name : ";
				std::cin >> nick_Name;
				std::cout << "enter PHONE NUMBER : ";
				std::cin >> phone_Number;
				std::cout << "enter darkest_Secret : ";
				std::cin >> darkest_Secret;
				if(!first_Name.empty() && !last_Name.empty() && !nick_Name.empty() && !darkest_Secret.empty() && !phone_Number.empty())
				{
					i++;
					if (i == 7)
						i = 0;
						contact[i] = new Contact(first_Name, last_Name, nick_Name, phone_Number, darkest_Secret);
				}
				if (i >= j)
					j = i;	
			}
			if (choice == "SEARCH")
			{
				k = j;
				if (i != -1)
				{
					while (k >= 0)
					{
						std::cout << "   ID     " << "FIRST NAME " << " LAST NAME   " << "NICK NAME" << std::endl;
						std::cout << "----------------------------------------------" << std::endl;
						std::cout << k << "        " << '|';
						print_str(contact[k]->getName());
						print_str(contact[k]->getLastName());
						print_str(contact[k]->getNick_name());
						std::cout << std::endl;
						std::cout << "----------------------------------------------" << std::endl;
						k--;
					}
				}
				if(i >= 0)
				{
					std::cout << "ENTER YOUR ID CHOICE : ";
					std::cin >> number_choice;
					if(number_choice >= 0 && number_choice <= j)
					{
						std::cout << "------------" << std::endl;
						print_str(contact[number_choice]->getName());
						std::cout << '\n';
						print_str(contact[number_choice]->getLastName());
						std::cout << '\n';
						print_str(contact[number_choice]->getNick_name());
						std::cout << '\n';
						print_str(contact[number_choice]->getPhone_Number());
						std::cout << '\n';
						print_str(contact[number_choice]->getDarkest_secret());
						std::cout << '\n';
						std::cout << "------------" << std::endl;
					}
				}
			
			}
			
		}
}


int	main()
{
	PhoneBook *phone = new PhoneBook();
	phone->entrydata();
}