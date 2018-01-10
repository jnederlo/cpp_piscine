#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony {

public:

    std::string name;
    int         num_legs;
    bool        mammal;
    bool        is_mystical;
    bool        has_horn;
    bool        is_horse;

    Pony( std::string name );
    ~Pony( void );

    void    ponyOnTheHeap( void ) const;
    void    ponyOnTheStack( void ) const;

};

#endif