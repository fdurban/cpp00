/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:09:43 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/23 16:34:56 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
}
