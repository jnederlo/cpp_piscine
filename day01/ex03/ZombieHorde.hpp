/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:21:57 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:36:37 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {

public:

    Zombie* horde;
    int     num_zombies;

    ZombieHorde( int N );
    ~ZombieHorde( void );
    
    void    announce( void );

};

#endif