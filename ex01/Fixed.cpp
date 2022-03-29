/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:01:32 by kangkim           #+#    #+#             */
/*   Updated: 2022/03/29 09:47:25 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

Fixed::Fixed(void) : value_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : value_(value) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : value_(value) {
  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  value_ = fixed.getRawBits();
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits (void) const {
  return value_;
}

void Fixed::setRawBits (int const raw) {
  value_ = raw;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(this->value_);
}

int Fixed::toInt(void) const {
  return static_cast<int>(this->value_);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return os;
}
