/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:09:03 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:46:35 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:

    std::string name;
    std::string type;

    Zombie();
    Zombie( std::string name, std::string type );
    ~Zombie( void );

    void    announce( std::string name, std::string type );
    void    announce();

};


#endif


