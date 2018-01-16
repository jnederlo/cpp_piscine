/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:50:01 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 23:32:44 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"


//CONSTRUCTOR METHOD:
FragTrap::FragTrap( std::string name ) : ClapTrap(name){

    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage = 20;
    armorDamageReduction = 5;

    std::cout << "FR4G-RP> Claptrap Fighter Incoming..." << std::endl;

    return ;
}

//DESTRUCTOR METHOD:
FragTrap::~FragTrap( void ){

    std::cout << "FR4G-RP> Claptrap Fighter Leaving" << std::endl;

    return ;
}

//COPY METHOD:
FragTrap::FragTrap( FragTrap const & src ) {


    *this = src;

    return ;
}

//Assignation Operator Overload Method:
FragTrap & FragTrap::operator=( FragTrap const & rhs ){

    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->maxHitPoints = rhs.maxHitPoints;
    this->energyPoints = rhs.energyPoints;
    this->maxEnergyPoints = rhs.maxEnergyPoints;
    this->level = rhs.level;
    this->meleeAttackDamage = rhs.meleeAttackDamage;
    this->rangedAttackDamage = rhs.rangedAttackDamage;
    this->armorDamageReduction = rhs.armorDamageReduction;

    std::cout << "FR4G-RP> Claptrap Fighter Incoming..." << std::endl;

    return *this;
}

unsigned int   FragTrap::vaulthunter_dot_exe(std::string const & target){

    std::string powerAttacks[] = {
        "5 Finger Death Punch",
        "Flurry Kick Attack",
        "Spinning Blade Denoginizer",
        "Delimber",
        "Eye Poke",
    };
    this->powerAttackDamage = this->meleeAttackDamage + this->rangedAttackDamage;
    std::string attack = powerAttacks[(rand() % 5)];

    if ((this->energyPoints - 25) > 0){
        this->energyPoints -= 25;
        std::cout << "FR4G-TP> " << this->name << " attacks " << target << " using a " << attack << " power attack" << std::endl;
        return this->powerAttackDamage;
    }
    else {
        std::cout << "FR4G-TP> " << this->name << " has insufficient energy to perform a " << attack << " power attack" << std::endl;
    }
    return 0;
}
