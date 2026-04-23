/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:46:05 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 12:08:15 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_count;
		int		_oldest;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact() const;
};

#endif