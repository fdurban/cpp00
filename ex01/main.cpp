/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:17 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/30 17:28:14 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	PhoneBook phonebook;
	std::string	input;
	std::string	data[5];
	std::string	indexinput;
	int		index;

	std::cout<<"\033[33m Welcome to my PhoneBook!\033[0m"<< std::endl;
	while(1)
	{
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(1);
		if(input == "ADD")
		{
			std::cout<<"Please add your contact iformation below"<<std::endl;
			std::cout<<"First  Name:";
			std::getline(std::cin, data[0]);
			std::cout<<"Last Name:";
			std::getline(std::cin, data[1]);
			std::cout<<"Nickname:";
			std::getline(std::cin, data[2]);
			std::cout<<"Phone Number:";
			std::getline(std::cin, data[3]);
			std::cout<<"Deepest Secret:";
			std::getline(std::cin, data[4]);
			Contact contacto(data[0], data[1], data[2], 865, data[4]);
			phonebook.addContact(contacto);
			phonebook.printContact();
		}
		else if(input == "SEARCH")
		{
			phonebook.printContact();
			std::cout<<"Please introduce the contact index"<<std::endl;
			std::getline(std::cin, indexinput);
			if(indexinput.length() > 1)
				std::cout<<"Invalid index";
			index = phonebook.toint(indexinput);
			if(index < phonebook.getSize())
				phonebook.displayContactDetails(index);
			else
				std::cout<<"Please inPlease introduce a valid  "<<std::endl;
		}
	} 
}
