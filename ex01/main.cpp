/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:17 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/03 17:41:49 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>


static int isValidNumber(std::string number)
{
	int	i;

	i = 0;

	while(number[i])
	{
		if(number[i]  == ' ')
		{
			i++;
			continue;
		}
		if(number[i] > '9' || number[i] < '0')
		{
			std::cout<<"Please introduce a valid number"<<std::endl;
			return(0);
		}
		i++;
	}
	return(1);
}

static bool isEmptyString(std::string str)
{
	size_t	i;

	i = 0;
	if(str.empty())
		return (true);
	while(i < str.length())
	{
		if(str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != '\r')
			return (false);
		i++;
	}
	return (true);
}

bool readField(const std::string& prompt, std::string& output)
{
	std::cout << prompt;
	std::getline(std::cin, output);
	if(std::cin.eof())
		exit(1);
	if(isEmptyString(output))
	{
		std::cout << "Invalid input. Field not saved." << std::endl;
		return (false);
	}
	return (true);
}

int readIndex(PhoneBook& pb)
{
	std::string s;
	std::getline(std::cin, s);
	int index = pb.toint(s);
	if(index < 0 || index >= pb.getSize() || s.empty())
	{
		std::cout << "Please introduce a valid index" << std::endl;
		return -1;
	}
	return index;
}

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
		std::cout<<"Introduce ADD, SEARCH or EXIT"<<std::endl;
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(1);
		if(input == "ADD")
		{
			if(!readField("First Name: ", data[0]))
				continue;
			if(!readField("Last Name: ", data[1]))
				continue;
			if(!readField("Nickname: ", data[2]))
				continue;
			if(!readField("Phone Number: ", data[3]))
				continue;
			if(!isValidNumber(data[3]))
				continue;
			if(!readField("Darkest Secret: ", data[4]))
				continue;
			Contact contacto(data[0], data[1], data[2], data[3], data[4]);
			phonebook.addContact(contacto);
		}
		else if(input == "SEARCH")
		{
			index = readIndex(phonebook);
			if(index != -1)
				phonebook.displayContactDetails(index);

		}
		else if(input == "EXIT")
			exit(1);
		else
			std::cout<<"Please enter a valid command"<<std::endl;
	} 
}
