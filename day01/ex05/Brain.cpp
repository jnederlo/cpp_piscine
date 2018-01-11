/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:30:45 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 22:35:22 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain( void ){

    return;
}

Brain::~Brain( void ){

    return;
}

std::string Brain::identify() const {
    std::stringstream addr;
    const void* vp = this;

    addr << vp;
    return addr.str();
}
