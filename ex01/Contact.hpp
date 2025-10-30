/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:11:23 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/30 14:24:31 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Contact
{
	private:
		std::string 	FirstName;
		std::string 	LastName;
		std::string 	NickName;
		int		PhoneNumber;
		std::string 	DarkestSecret;
	public:
		Contact();
		Contact(std::string firstname, std::string lastname, std::string nickname, int phone, std::string secret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		int		getPhoneNumber();
		std::string	getDarkestSecret();

		void	setFirstName(std::string name);
		void	printFullInfo();
		void	displayContactDetails(int index);
		/* void	set_first_name(const std::string& FirstName);
		void	set_last_name(const std::string& LastName);
		void	set_nick_name(const std::string& NickName);
		void	set_phone_number(const std::string& PhoneNumber);
		void	set_darkest_secret(const std::string& DarkestSecret);*/;
};
