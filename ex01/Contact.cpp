/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:09:43 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/30 15:41:59 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Incializando contacto vacio" << std::endl;
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, int phone, std::string secret) {
	this->FirstName = firstname;
	this->LastName = lastname;
	this->NickName = nickname;
	this->PhoneNumber = phone;
	this->DarkestSecret = secret;
	std::cout << "Contacto creado" << std::endl;
}

std::string Contact::getFirstName() {
	return (this->FirstName);
}

std::string Contact::getLastName() {
	return (this->LastName);
}

std::string Contact::getNickName() {
	return (this->NickName);
}

int	Contact::getPhoneNumber() {
	return (this->PhoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (this->DarkestSecret);
}

void    Contact::printFullInfo() {
	std::cout << this->FirstName;
	std::cout << this->LastName;
	std::cout << this->NickName;
	std::cout << this->PhoneNumber<<std::endl;	
}



/*
void	Contact::set_first_name(const std::string& FirstName)
{
	this->FirstName = FirstName;
}

void	Contact::set_last_name(const std::string& LastName)
{
	this->LastName = LastName;
}

void	Contact::set_nick_name(const std::string& NickName)
{
	this->NickName = NickName;
}
void	Contact::set_phone_number(const std::string& PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

void	Contact::set_darkest_secret(const  std::string& DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}*/
