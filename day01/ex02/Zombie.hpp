#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:

    std::string name;
    std::string type;

    Zombie( void );
    ~Zombie( void );

    void    announce( std::string type ) const;

};


#endif

