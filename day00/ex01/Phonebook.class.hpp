#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>

class Phonebook {

public:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favourite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    Phonebook( void );
    ~Phonebook( void );
};

#endif