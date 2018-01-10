#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

public:

    std::string type;

    ZombieEvent( void );
    ~ZombieEvent( void );

    void		setZombieType( void );   
    Zombie*		newZombie( std::string name );
	void		randomChump( void );

};

#endif