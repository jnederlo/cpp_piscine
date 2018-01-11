/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:08:27 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 14:11:38 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string z_name [20] = {
        "Clementine",
        "Cleetus",
        "Josephine",
        "Todd",
        "Caroline",
        "Kevin",
        "Terron",
		"Stephan",
		"Jerry",
		"Miss Kitty",
		"Jesus",
		"Gerald",
		"Mr Sprinkles",
		"Mrs Jellybean",
		"Satan",
		"Herald",
		"Mr Dressup",
		"Lizzy Mcquire",
		"Pinky",
		"The Brain",
    };

ZombieEvent::ZombieEvent( void ){

    return;
}

ZombieEvent::~ZombieEvent( void ){

    return;
}

void	ZombieEvent::setZombieType( std::string type ){

	this->type = type;
}

Zombie*	ZombieEvent::newZombie( std::string name ){

	Zombie* a_zombie = new Zombie(name, this->type);

	return a_zombie;
}

void	ZombieEvent::randomChump( std::string type ){

	int rand_name = std::rand() % 20;
	
	Zombie random_zombie;
	random_zombie.announce(z_name[rand_name], type);
}
