/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:18:49 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:18:50 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _fractBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _value(static_cast<int>(roundf(f * (1 << _fractBits)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fractBits);
}

int Fixed::toInt(void) const {
	return _value >> _fractBits;
}

bool Fixed::operator>(const Fixed& rhs) const {
	return _value > rhs._value;
}

bool Fixed::operator<(const Fixed& rhs) const {
	return _value < rhs._value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return _value >= rhs._value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return _value <= rhs._value;
}

bool Fixed::operator==(const Fixed& rhs) const {
	return _value == rhs._value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return _value != rhs._value;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
	Fixed r;
	r.setRawBits(_value + rhs._value);
	return r;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	Fixed r;
	r.setRawBits(_value - rhs._value);
	return r;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	Fixed r;
	r.setRawBits(static_cast<int>((static_cast<long long>(_value) * rhs._value) >> _fractBits));
	return r;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	Fixed r;
	r.setRawBits(static_cast<int>((static_cast<long long>(_value) << _fractBits) / rhs._value));
	return r;
}

Fixed& Fixed::operator++(void) {
	++_value;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++_value;
	return tmp;
}

Fixed& Fixed::operator--(void) {
	--_value;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--_value;
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}
