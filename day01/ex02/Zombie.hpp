#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:

    std::string name;
    std::string type;

    Zombie( std::string name );
    ~Zombie( void );

    void    announce( void ) const;

};

#endif

