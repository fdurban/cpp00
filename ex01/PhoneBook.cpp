/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:10:48 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/23 16:37:22 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact(std::string data[5])
{
	
	this->contacts[0].set_first_name(data[0]);
	this->contacts[0].set_last_name(data[1]);
	this->contacts[0].set_nick_name(data[2]);
	this->contacts[0].set_phone_number(data[3]);
	this->contacts[0].set_darkest_secret(data[4]);
}
