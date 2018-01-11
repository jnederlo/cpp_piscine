/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:21:24 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:59:14 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
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


ZombieHorde::ZombieHorde( int N ){

    Zombie* zombies = new Zombie[N];
    ZombieHorde::horde = zombies;
    std::string type = "heap";
    this->num_zombies = N;

    for (int i = 0; i < N; i++){
        int rand_name = std::rand() % 20;
		zombies[i].name = z_name[rand_name];
        zombies[i].type = type;
    }
    return;
}

ZombieHorde::~ZombieHorde( void ){

    delete[] this->horde;
    std::cout << std::endl << "Entire Wave Destroyed!" << std::endl << std::endl;
    return;
}

void    ZombieHorde::announce(void) {
    if (this->horde) {
        for (int i = 0; i < this->num_zombies; i++) {
            this->horde[i].announce();
        }
    }
}
