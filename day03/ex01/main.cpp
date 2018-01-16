/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:00:10 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/12 21:10:59 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	FragTrap	claptrap1("Mr Sprinkles");
	ScavTrap	claptrap2("Ugly Joe");

	std::cout << std::endl;
	
    claptrap2.takeDamage(claptrap1.rangedAttack(claptrap2.name));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.name));

    claptrap1.takeDamage(claptrap2.rangedAttack(claptrap1.name));
    claptrap2.takeDamage(claptrap1.meleeAttack(claptrap2.name));

    claptrap1.takeDamage(claptrap2.rangedAttack(claptrap1.name));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.name));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.name));
    claptrap1.takeDamage(claptrap2.meleeAttack(claptrap1.name));

    claptrap1.beRepaired(50);
    claptrap1.beRepaired(100);
	claptrap2.beRepaired(50);
	claptrap2.beRepaired(100);

	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.name));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.name));
	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.name));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.name));
	claptrap1.takeDamage(claptrap2.challengeNewcomer(claptrap1.name));
	claptrap2.takeDamage(claptrap1.vaulthunter_dot_exe(claptrap2.name));

    std::cout << std::endl;

	return 0;
}