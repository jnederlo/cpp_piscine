/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:52:54 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 23:34:12 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"



//CONSTRUCTOR METHOD:
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){

    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage = 15;
    armorDamageReduction = 3;

    std::cout << "SC4V-RP> Claptrap spawning from the depths of hell..." << std::endl;    

    return ;
}

//DESTRUCTOR METHOD:
ScavTrap::~ScavTrap( void ){

    std::cout << "SC4V-RP> Claptrap Dissapears back into the depths of hell..." << std::endl;

    return ;
}

//COPY METHOD:
ScavTrap::ScavTrap( ScavTrap const & src ){

    *this = src;

    return ;
}

//Assignation Operator Overload Method:
ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ){

    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->maxHitPoints = rhs.maxHitPoints;
    this->energyPoints = rhs.energyPoints;
    this->maxEnergyPoints = rhs.maxEnergyPoints;
    this->level = rhs.level;
    this->meleeAttackDamage = rhs.meleeAttackDamage;
    this->rangedAttackDamage = rhs.rangedAttackDamage;
    this->armorDamageReduction = rhs.armorDamageReduction;

    std::cout << "SC4V-RP> ScavTrap spawning from the depths of hell..." << std::endl;

    return *this;
}

unsigned int   ScavTrap::challengeNewcomer(std::string const & target){

    std::string challenges[] = {
        "do a cartwheel over a bin of puppies",
        "sing a beautiful rendition of silent night",
        "correctly answer as to why the chicken crossed the road",
        "enter a staring contest with Hellen Keller",
        "recite Pi to the 99th decimal point",
    };
    std::string challenge = challenges[(rand() % 5)];
    this->challengeDamage = this->meleeAttackDamage + this->rangedAttackDamage;
    

    if ((this->energyPoints - 25) > 0){
        this->energyPoints -= 25;
        std::cout << "SC4V-TP> " << this->name << " challenges " << target << " to " << challenge << std::endl;
        return this->challengeDamage;
    }
    else {
        std::cout << "SC4V-TP> " << this->name << " has insufficient energy to perform the challenge " << std::endl;
    }
    return 0;
}

