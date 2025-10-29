/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:59:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/29 13:57:17 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <vector>
class PhoneBook
{
	private:
		Contact contactos[8];
		int	size;
		//int	index;
	public:
		PhoneBook();
		void	addContact(const Contact& contact);
		void	printContact();
		//void	add_contact(const Contact& contact);
		//void	display_contacts();
		//void	display_phonebook();
};
