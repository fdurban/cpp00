/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:10:48 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/29 14:03:52 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0) {}

void   PhoneBook::addContact(const Contact& contact) {
	contactos[size % 8] = contact;
	size++;
}

void   PhoneBook::printContact() {
	for (int i = 0; i < size; i++) {
		contactos[i].printFullInfo();
	}
}



/*
PhoneBook::PhoneBook(const Contact& contact) {
	this->contacts.push_back(contact);
}

void	PhoneBook::display_contacts() {
	for (size_t i = 0; i < this->contacts.size(); i++) {
		std::cout << this->contacts[i] << std::endl;
	}
}*/
