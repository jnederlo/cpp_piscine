/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:24:27 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/11 19:58:08 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed {

public:

    Fixed( void );
    ~Fixed( void );
    Fixed( Fixed const & src );
    Fixed( int const n );
    Fixed( float const f );
    Fixed & operator=( Fixed const & rhs );

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

private:

    int _fxPoint;
    static int const _fracBits = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif