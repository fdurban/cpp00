/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:11:23 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/23 16:32:40 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void	set_first_name(const std::string& FirstName);
		void	set_last_name(const std::string& LastName);
		void	set_nick_name(const std::string& NickName);
		void	set_phone_number(const std::string& PhoneNumber);
		void	set_darkest_secret(const std::string& DarkestSecret);


};
