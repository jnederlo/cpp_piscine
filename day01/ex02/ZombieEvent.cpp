
#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ){
    return;
}

ZombieEvent::~ZombieEvent( void ){
    std::cout << "Destructor was caled." << std::endl;
    return;
}

void       ZombieEvent::setZombieType( void ){

    std::string z_type [7] = {
        "Red",
        "Blue",
        "Green",
        "Purple",
        "Yellow",
        "Orange",
        "Black",
    };
    
    
}

Zombie*    ZombieEvent::newZombie( std::string name, std::string type ){


    return 
    
}