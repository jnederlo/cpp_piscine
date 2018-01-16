/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:52:54 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 21:41:15 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>


//CONSTRUCTOR METHOD:
ScavTrap::ScavTrap( std::string name ) :
        name(name),
        hitPoints(100),
        maxHitPoints(100),
        energyPoints(50),
        maxEnergyPoints(50),
        level(1),
        meleeAttackDamage(20),
        rangedAttackDamage(15),
        armorDamageReduction(3){

    std::cout << "SC4V-RT> Claptrap spawning from the depths of hell..." << std::endl;    

    return ;
}

//DESTRUCTOR METHOD:
ScavTrap::~ScavTrap( void ){

    std::cout << "SC4V-RT> Claptrap Dissapears back into the depths of hell..." << std::endl;

    return ;
}

//COPY METHOD:
ScavTrap::ScavTrap( ScavTrap const & src ){

    // std::cout << "Copy constructor called" << std::endl;
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

    std::cout << "SC4V-RT> Claptrap spawning from the depths of hell..." << std::endl;

    return *this;
}

unsigned int    ScavTrap::rangedAttack(std::string const & target ){

    std::cout << "SC4V-TP> " << this->name << " challenges " << target << " from a distance for " << this->rangedAttackDamage << " hit points" << std::endl;;

    return this->rangedAttackDamage;
}

unsigned int   ScavTrap::meleeAttack( std::string const & target ){

    std::cout << "SC4V-TP> " << this->name << " challenges " << target << " with a confusing melee attack for " << this->meleeAttackDamage << " hit points" << std::endl;

    return this->meleeAttackDamage;
}

void    ScavTrap::takeDamage( unsigned int amount ){

    if (amount == 0){
        std::cout << "\t " << this->name << " is disgusted by the lack of energy and loses 0 HP -- > remaining HP of " << this->hitPoints << std::endl;
    }
    else if (this->hitPoints == 0){
        std::cout << "\t " << this->name << " is still floundering from the last challenge and can't take anymore --> HP of 0" << std::endl;
    }
    else if (amount <= this->armorDamageReduction){
        std::cout << "\t " << this->name << " calls you a sissy and laughs at your pathetic challenge and loses 0 HP --> remaining HP of " << this->hitPoints << std::endl;
    }
    else if ((this->hitPoints - int(amount - this->armorDamageReduction)) <= 0){
        this->hitPoints = 0;
        std::cout << "\t " << this->name << " succumbs to the challenge in a rather weak fashion and loses all HP --> reamining HP of 0" << std::endl;
    }
    else {
        this->hitPoints -= int(amount - this->armorDamageReduction);
        std::cout << "\t " << this->name << " loses " << amount - this->armorDamageReduction << " hit points from the challenge --> remaining HP of " << this->hitPoints << std::endl;
    }

    return ;
}

void    ScavTrap::beRepaired( unsigned int amount ){

    if (this->hitPoints == 100){
        std::cout << "SC4V-TP> " << this->name << " discovers an extra repair pack and flaunts it as he remains at HP of 100" << std::endl;
    }
    else if ((this->hitPoints + int(amount)) > int(this->maxHitPoints)){
        this->hitPoints = int(this->maxHitPoints);
        std::cout << "SC4V-TP> " << this->name << " takes a break with a nice relaxing boost from a repair back HP increased to 100" << std::endl;
    }
    else {
        this->hitPoints += int(amount);
        std::cout << "SC4V-TP> " << this->name << " finds a desperately needed repair pack HP increased to " << this->hitPoints << std::endl;
    }

    return ;
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

void ScavTrap::setName(std::string name){

    this->name = name;
    
    return;
}
