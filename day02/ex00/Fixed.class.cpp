/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:07:54 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/11 15:35:20 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.class.hpp"
#include <iostream>


Fixed::Fixed( void ) : _fxPoint(0){

    std::cout << "Default constructor called" <<std::endl;

    return;
}

Fixed::~Fixed( void ){

    std::cout << "Destructor called" << std::endl;

    return;
}

Fixed::Fixed( Fixed const & src ){

    std::cout << "Copy constructor called" << std::endl;

    *this = src;

    return;
}

int     Fixed::getRawBits( void ) const{

    std::cout << "getRawBits member function called" << std::endl;

    return this->_fxPoint;
}

void    Fixed::setRawBits( int const raw ){

    this->_fxPoint = raw;

    return;
}

Fixed & Fixed::operator=( Fixed const & rhs ){

    std::cout << "Assignation operator called" << std::endl;

    this->_fxPoint = rhs.getRawBits();

    return *this;
}