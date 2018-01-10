
#include <iostream>
#include "Pony.hpp"

int     main(void){

    Pony*      Mr_sprinkles = new Pony("Mr Sprinkles");
    Pony       Mrs_jellybean = Pony("Mrs Jellybean");

    if (Mr_sprinkles->has_horn)
    {
        Mr_sprinkles->is_mystical = 1;
        Mr_sprinkles->is_horse = 0;
        std::cout << "My name is " << Mr_sprinkles->name 
        << " I have " << Mr_sprinkles->num_legs << " legs"
        << " and I am a mystical unicorn..." ;
        Mr_sprinkles->ponyOnTheHeap();
    }
    else
    {
        Mr_sprinkles->is_mystical = 0;
        Mr_sprinkles->is_horse = 1;
        std::cout << "My name is " << Mr_sprinkles->name 
        << " I have " << Mr_sprinkles->num_legs << " legs"
        << " and I am just a regular horse..." ;
        Mr_sprinkles->ponyOnTheHeap();
    }
    if (Mrs_jellybean.has_horn)
    {
        Mrs_jellybean.is_mystical = 1;
        Mrs_jellybean.is_horse = 0;
        std::cout << "My name is " << Mrs_jellybean.name 
        << " I have " << Mrs_jellybean.num_legs << " legs"
        << " and I am a mystical unicorn..." ;
        Mrs_jellybean.ponyOnTheStack();
    }
    else
    {
        Mrs_jellybean.is_mystical = 0;
        Mrs_jellybean.is_horse = 1;
        std::cout << "My name is " << Mrs_jellybean.name 
        << " I have " << Mrs_jellybean.num_legs << " legs"
        << " and I am just a regular horse..." ;
        Mrs_jellybean.ponyOnTheStack();
    }

    delete Mr_sprinkles;
    return 0;
}
