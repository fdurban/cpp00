/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:59:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/11/03 16:45:06 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
	private:
		Contact contactos[8];
		int	size;
		int	index;
	public:
		PhoneBook();
		void	addContact(const Contact& contact);
		void	printContact();
		void	displayContactDetails(int index);
		int	getSize();
		int	toint(const std::string& s);
};
