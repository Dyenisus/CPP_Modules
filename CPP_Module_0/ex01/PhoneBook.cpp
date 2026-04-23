/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:45:07 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 17:32:11 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_count = 0;
	_oldest = 0;
}

PhoneBook::~PhoneBook()
{
}

static std::string	promptField(const std::string& label)
{
	std::string	value;

	while (value.empty())
	{
		std::cout << label << ": ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return value;
		if (value.empty())
			std::cout << "Field cannot be empty. Try again.\n";
	}
	return value;
}

static std::string	truncate(const std::string& str)
{
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	firstName     = promptField("First name");
	if (std::cin.eof()) return ;
	lastName      = promptField("Last name");
	if (std::cin.eof()) return ;
	nickName      = promptField("Nickname");
	if (std::cin.eof()) return ;
	phoneNumber   = promptField("Phone number");
	if (std::cin.eof()) return ;
	darkestSecret = promptField("Darkest secret");
	if (std::cin.eof()) return ;

	_contacts[_oldest].setContact(firstName, lastName,
		nickName, phoneNumber, darkestSecret);
	_oldest = (_oldest + 1) % 8;
	if (_count < 8)
		_count++;
	std::cout << "Contact added.\n";
}

void	PhoneBook::searchContact() const
{
	std::string	input;
	int			index;

	if (_count == 0)
	{
		std::cout << "PhoneBook is empty.\n";
		return ;
	}

	std::cout << std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << "\n";

	for (int i = 0; i < _count; i++)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
			<< std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
			<< std::setw(10) << truncate(_contacts[i].getNickName()) << "\n";
	}

	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;

	for (std::size_t i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Invalid index.\n";
			return ;
		}
	}

	index = std::atoi(input.c_str());
	if (index < 0 || index >= _count)
	{
		std::cout << "Index out of range.\n";
		return ;
	}

	std::cout << "First name    : " << _contacts[index].getFirstName() << "\n";
	std::cout << "Last name     : " << _contacts[index].getLastName() << "\n";
	std::cout << "Nickname      : " << _contacts[index].getNickName() << "\n";
	std::cout << "Phone number  : " << _contacts[index].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << "\n";
}
