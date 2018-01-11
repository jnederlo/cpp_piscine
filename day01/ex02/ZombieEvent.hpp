/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:08:33 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 14:23:47 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

public:

    std::string type;

    ZombieEvent( void );
    ~ZombieEvent( void );

    void		setZombieType( std::string type );   
    Zombie*		newZombie( std::string name );
	void		randomChump( std::string type );

};

#endif