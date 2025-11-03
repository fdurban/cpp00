/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:11:23 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/03 12:46:05 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Contact
{
	private:
		std::string 	FirstName;
		std::string 	LastName;
		std::string 	NickName;
		std::string	PhoneNumber;
		std::string 	DarkestSecret;
	public:
		Contact();
		Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string secret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

		void	setFirstName(std::string name);
		void	printFullInfo();
		void	displayContactDetails(int index);
};
