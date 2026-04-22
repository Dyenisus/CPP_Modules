/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:55 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 14:39:26 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int					_value;
	static const int	_fractBits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif