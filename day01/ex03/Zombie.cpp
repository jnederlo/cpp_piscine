/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:19:48 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:48:47 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ){

    return;
}

Zombie::Zombie( std::string name, std::string type){

    this->name = name;
    this->type = type;
    return;
}

Zombie::~Zombie( void ){
    std::cout << "Zombie Destroyed" << std::endl;
    return;
}

void    Zombie::announce( std::string name, std::string type ){

    std::cout << name << " (" << type << ") " << "Hungry for Braiiiiiinnnnnsssssss" << std::endl;
}

void    Zombie::announce(){

    std::cout << this->name << " (" << this->type << ") " << "Hungry for Braiiiiiinnnnnsssssss" << std::endl;
}
