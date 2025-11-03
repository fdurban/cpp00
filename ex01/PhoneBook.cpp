/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:10:48 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/03 15:53:15 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits.h>

void	print_value(std::string str) {
	unsigned int	i;
	
	i = 0;
	if (str.length() > 10)
	{
		std::cout<<str.substr(0,9);
		std::cout<<'.';
	}
	else
	{
		while(i < 10 - str.length())
		{
			std::cout<<" ";
			i++;
		}
		std::cout<<str;
	}
}

PhoneBook::PhoneBook() : size(0), index(0){}

void   PhoneBook::addContact(const Contact& contact) {
	contactos[index % 8] = contact;
	index++;
	if(size < 8)
		size++;
}

void   PhoneBook::printContact() {
	std::cout<<"+----------+----------+----------+----------+"<<std::endl;
	std::cout<<"|     index|first name| last name|  nickname|"<<std::endl;
	std::cout<<"+----------+----------+----------+----------+"<<std::endl;
	for (int i = 0; i < size; i++) {
		std::cout<<"|";
		std::cout<<"         "<<i;
		std::cout<<"|";
		print_value(contactos[i].getFirstName());
		std::cout<<"|";
		print_value(contactos[i].getLastName());
		std::cout<<"|";
		print_value(contactos[i].getNickName());
		std::cout<<"|"<<std::endl;
	}
	std::cout<<"+----------+----------+----------+----------+"<<std::endl;
}

void	PhoneBook::displayContactDetails(int index) {
	std::cout<<"First Name :"<< contactos[index].getFirstName()<<std::endl;
	std::cout<<"Last Name :" << contactos[index].getLastName()<<std::endl;
	std::cout<<"Nickname :" << contactos[index].getNickName()<<std::endl;
	std::cout<<"Phone number :" << contactos[index].getPhoneNumber()<<std::endl;
	std::cout<<"Darkest Secret :" << contactos[index].getDarkestSecret()<<std::endl;
}

int	PhoneBook::getSize() {
	return (this->size);
}

int	PhoneBook::toint(const std::string& s) {
	int	result;
	result = 0;
	for(size_t i = 0; i < s.length(); i++)
	{
		if(s[i] < '0' || s[i] > '9')
			return (-1);
		result = result * 10 + (s[i] - '0');
	}
	if(result > INT_MAX)
		return (-1);
	return (result);
}
