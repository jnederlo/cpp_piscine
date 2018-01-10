
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string z_type [7] = {
        "Red",
        "Blue",
        "Green",
        "Purple",
        "Yellow",
        "Orange",
        "Black",
    };

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

    std::cout << "ZombieEvent Destructor was called." << std::endl;
    return;
}

void	ZombieEvent::setZombieType( void ){

	int rand_type = std::rand() % 8;
	this->type = z_type[rand_type];
}

Zombie*	ZombieEvent::newZombie( std::string name ){

	Zombie* a_zombie = new Zombie;

	a_zombie->type = this->type;
	a_zombie->name = name;

	return a_zombie;
}

void	ZombieEvent::randomChump( void ){

	int rand_name = std::rand() % 20;
	int rand_type = std::rand() % 7;
	Zombie* random_zombie = new Zombie;

	random_zombie->name = z_name[rand_name];
	random_zombie->announce(z_type[rand_type]);
}
