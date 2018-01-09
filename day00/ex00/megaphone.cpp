#include <iostream>

int main(int argc, char **argv)
{
    int     i;
    int     j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    i = 1;
    while (i < argc)
    { 
        j = 0;
        std::string s(argv[i]);
        while (j < int(s.length()))
        {
            if (s[j] >= 97 && s[j] <= 122) 
                s[j] -= 32;
            j++;
        }
        std::cout << s;
        i++;
    }
    std::cout << std::endl;
    return 0;
}