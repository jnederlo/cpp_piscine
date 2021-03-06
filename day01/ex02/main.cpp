/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:08:21 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:51:47 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void){


	ZombieEvent	s_zombies[4];
	ZombieEvent	h_zombies[4];
	Zombie* 	Z[4];

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

	for (int i = 0; i < 4; i++){
		s_zombies[i].randomChump("stack");
	}

	std::cout << std::endl << "Zombie Wave Incoming" << std::endl << std::endl;
	for (int j = 0; j < 4; j++){
		h_zombies[j].setZombieType("heap");
		int rand_name = std::rand() % 20;
		Z[j] = h_zombies[j].newZombie(z_name[rand_name]);
		Z[j]->announce(Z[j]->name, Z[j]->type);
	}

	for (int k = 0; k < 4; k++){
		delete Z[k];	
	}

	std::cout << std::endl << "Entire Wave Destroyed!" << std::endl << std::endl;
	return 0;

}