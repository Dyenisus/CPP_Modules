/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:45:17 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 17:31:40 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void		Contact::setContact(const std::string& firstName,
							const std::string& lastName,
							const std::string& nickName,
							const std::string& phoneNumber,
							const std::string& darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string Contact::getNickName() const
{
	return _nickName;
}

std::string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}
