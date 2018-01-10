

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void){

	ZombieEvent*	h_zombies = new ZombieEvent[4];
	ZombieEvent		zombies[4];
	Zombie			s_zombies[4];

	for (int i = 0; i < 4; i++){
		h_zombies[i].randomChump();
	}

	//NEED TO CALL REGULAR ZOMBIES AND GIVE THEM A NAME AND THEN CALL THE ANNOUNCE METHOD
	for (int j = 0; j < 4; j++){
		zombies[j].newZombie("Duplicate");
	}




	return 0;

}