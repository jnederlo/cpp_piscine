/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:24:09 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/11 20:45:39 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>


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
    // OR
    // *this = Fixed::operator=( src );

    return;
}

Fixed::Fixed( int const n ) : _fxPoint(n << _fracBits){

    std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed( float const f ){

    this->_fxPoint = roundf(f * (1 << this->_fracBits));

    std::cout << "Float constructor called" << std::endl;

}

int     Fixed::getRawBits( void ) const{

    return this->_fxPoint;
}

void    Fixed::setRawBits( int const raw ){

    this->_fxPoint = raw;

    return;
}

float   Fixed::toFloat( void ) const{

    return ((float)(this->_fxPoint) / (1 << this->_fracBits));
}

int     Fixed::toInt( void ) const{

    return this->_fxPoint >> this->_fracBits;
}

Fixed & Fixed::operator=( Fixed const & rhs ){

    std::cout << "Assignation operator called" << std::endl;

    this->_fxPoint = rhs.getRawBits();

    return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){

    o << rhs.toFloat();

    return o;
}