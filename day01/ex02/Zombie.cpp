
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
    return;
}

Zombie::~Zombie( void ){
    std::cout << "Destructor was caled." << std::endl;
    return;
}

void    Zombie::announce( void ) const {

    std::cout << this->name << "(" << this->type << ")" << "Hungry for Braiiiiiinnnnnsssssss" << std::endl;
}
