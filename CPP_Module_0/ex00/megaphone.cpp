/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:48:04 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 00:40:50 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static void	megaphone(std::string str)
{
	int	j = 0;

	while (str[j])
	{
		std::cout << (char) std::toupper((unsigned char)str[j]);
		j++;
	}	
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (av[i])
	{
		megaphone(av[i]);
		i++;
	}
	std::cout << std::endl;
}
