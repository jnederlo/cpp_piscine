
#include <iostream>
#include "Pony.hpp"

Pony::Pony( std::string name ) : name(name), num_legs(4), mammal(1), has_horn(1) {
    return;
}

Pony::~Pony( void ){
    std::cout << "Destructor was caled ... PROVEN." << std::endl;
    return;
}

void    Pony::ponyOnTheHeap( void ) const {

    std::cout << "Neighhhhh, I'm a Pony on the heap." << std::endl;
}

void    Pony::ponyOnTheStack( void ) const {

    std::cout << "Neighhhh, I'm a Pony chilling on the stack, soon to be forgotten." << std::endl;
}
