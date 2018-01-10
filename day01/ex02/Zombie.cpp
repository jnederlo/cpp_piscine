
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ){
    return;
}

Zombie::~Zombie( void ){
    std::cout << "Zombie destructor was called." << std::endl;
    return;
}

void    Zombie::announce( std::string type ) const {

    std::cout << this->name << " (" << type << ") " << "Hungry for Braiiiiiinnnnnsssssss" << std::endl;
}
