/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:09:43 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/03 13:05:59 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string secret) {
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

std::string Contact::getPhoneNumber() {
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
