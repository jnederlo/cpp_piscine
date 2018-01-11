/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:54:04 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 16:58:20 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int	main(void){

	int n = 5;

    std::cout << n << " Zombie Wave Incoming!" << std::endl;

    ZombieHorde	    *zombies = new ZombieHorde(n);
    zombies->announce();
    std::cout << "Destroying all zombies" << std::endl;
    zombies->~ZombieHorde();

    n = 7;
    std::cout << n << " Zombie Wave Incoming!" << std::endl;

    zombies = new ZombieHorde(n);
    zombies->announce();
    std::cout << "Destroying all zombies" << std::endl;
    zombies->~ZombieHorde();

	return 0;

}