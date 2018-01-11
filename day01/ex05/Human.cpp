/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:43:51 by jnederlo          #+#    #+#             */
/*   Updated: 2018/01/10 22:35:14 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human(){

    return;
}

Human::~Human(){

    return;
}

std::string Human::identify() const {

    return this->brain.identify();
}

const Brain &Human::getBrain(){

    return this->brain;
}