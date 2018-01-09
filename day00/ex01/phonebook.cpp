#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

void    print_index(Phonebook contact)
{
    std::cout << "First Name:       " << contact.first_name << std::endl;
    std::cout << "Last Name:        " << contact.last_name << std::endl;
    std::cout << "Nickname:         " << contact.nickname << std::endl;
    std::cout << "Login:            " << contact.login << std::endl;
    std::cout << "Postal Address:   " << contact.postal_address << std::endl;
    std::cout << "Phone Number:     " << contact.phone_number << std::endl;
    std::cout << "Birthday Date:    " << contact.birthday_date << std::endl;
    std::cout << "Favourite Meal:   " << contact.favourite_meal << std::endl;
    std::cout << "Underwear Color:  " << contact.underwear_color << std::endl;
    std::cout << "Darkest Secret:   " << contact.darkest_secret << std::endl;
}

int main()
{
    Phonebook   contact[8];
    int         i;

    std::string input;
    i = 0;
    while (1)
    {
        std::cout << "Enter a Command ('ADD', 'SEARCH', or 'EXIT'): ";
        std::getline (std::cin, input);
        if(!input.compare("EXIT"))
            return 0;
        else if (!input.compare("ADD"))
        {
            if (i == 8)
            {
                std::cout << "The phonebook is full, please enter the 'EXIT' or 'SEARCH' command to continue" << std::endl;
                continue;
            }
            std::cout << "What is your first name?  ";
            std::getline (std::cin, contact[i].first_name);
            std::cout << "What is your last name?  ";
            std::getline (std::cin, contact[i].last_name);
            std::cout << "What is your nickname?  ";
            std::getline (std::cin, contact[i].nickname);
            std::cout << "What is your login?  ";
            std::getline (std::cin, contact[i].login);
            std::cout << "What is your postal address?  ";
            std::getline (std::cin, contact[i].postal_address);
            std::cout << "What is your phone number?  ";
            std::getline (std::cin, contact[i].phone_number);
            std::cout << "What is your birthday?  ";
            std::getline (std::cin, contact[i].birthday_date);
            std::cout << "What is your favourite meal?  ";
            std::getline (std::cin, contact[i].favourite_meal);
            std::cout << "What is your underwear color?  ";
            std::getline (std::cin, contact[i].underwear_color);
            std::cout << "What is your darkest secret?  ";
            std::getline (std::cin, contact[i].darkest_secret);
            i++;
        }
        else if (!input.compare("SEARCH"))
        {
			if (i > 0)
			{
				std::cout << std::endl;
				std::cout << std::setw(10) << "Index" << "|";
				std::cout << std::setw(10) << "First Name" << "|";
				std::cout << std::setw(10) << "Last Name" << "|";
				std::cout << std::setw(10) << "Nickname" << std::endl;
			}
			for (int j = 0; j < i; j++)
            {
                std::cout << std::setw(10) << j << "|";
                if (contact[j].first_name.length() > 10)
                    std::cout << std::right << contact[j].first_name.substr(0, 9) << "." << "|";
                else
                    std::cout << std::setw(10) << std::right << contact[j].first_name << "|";
                if (contact[j].last_name.length() > 10)
                    std::cout << std::right << contact[j].last_name.substr(0, 9) << "." << "|";
                else
                    std::cout << std::setw(10) << std::right << contact[j].last_name << "|";
                if (contact[j].nickname.length() > 10)
                    std::cout << std::right << contact[j].nickname.substr(0, 9) << ".";
                else
                    std::cout << std::setw(10) << std::right << contact[j].nickname;
                std::cout << std::endl;
            }
			std::cout << std::endl;
            if (i > 0)
                std::cout << "Select your desired index from the above list:   ";
            else
            {
                std::cout << "No entries to search..." << std::endl;
                continue;
            }
            std::string index;
            std::getline (std::cin, index);
            if (!index.compare("0") && i > 0)
                print_index(contact[0]);
            else if (!index.compare("1") && i > 1)
                print_index(contact[1]);
            else if (!index.compare("2") && i > 2)
                print_index(contact[2]);
            else if (!index.compare("3") && i > 3)
                print_index(contact[3]);
            else if (!index.compare("4") && i > 4)
                print_index(contact[4]);
            else if (!index.compare("5") && i > 5)
                print_index(contact[5]);
            else if (!index.compare("6") && i > 6)
                print_index(contact[6]);
            else if (!index.compare("7") && i > 7)
                print_index(contact[7]);
            else
                std::cout << "Invalid index..." << std::endl;
        }
        else
            continue;
    }
    return 0;
}
