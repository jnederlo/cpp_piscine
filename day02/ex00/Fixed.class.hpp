/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:08:05 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/11 14:21:52 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {

public:

    Fixed( void );
    ~Fixed( void );
    Fixed( Fixed const & src );
    Fixed & operator=( Fixed const & rhs );

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:

    int _fxPoint;
    static int const _fracBits = 8;

};

#endif