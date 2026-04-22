/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:48:48 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/21 21:56:52 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	startupMessage(void)
{
	std::cout << "Welcome to PhoneBook. Please enter one of these commands:\n\
- ADD\n\
- SEARCH\n\
- EXIT\n\n> ";
}

static void	getUserCommand(std::string& cmd)
{
	std::getline(std::cin, cmd);
	if (!cmd.empty() && cmd[cmd.size() - 1] == '\r')
	{
		cmd.erase(cmd.size() - 1);
	}
}

int	main(void)
{
	PhoneBook	book;
	std::string	command;

	startupMessage();
	while (1)
	{
		getUserCommand(command);
		if (std::cin.eof())
			break ;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.searchContact();
		else
			std::cout << "Unknown command. Use ADD, SEARCH or EXIT.\n";
		std::cout << "> ";
	}
	return 0;
}
