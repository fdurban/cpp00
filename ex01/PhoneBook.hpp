/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:59:18 by fdurban-          #+#    #+#             */
/*   Updated: 2025/10/23 15:31:54 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	size;
		int	index;
	public:
		PhoneBook()
		{
			size = 0;
			index = 0;
		}
		void	add_contact(std::string data[5]);
};
