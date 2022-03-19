/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:04:51 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 18:48:07 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name), _weap(NULL) {

    return ;
}

HumanB::~HumanB ( void ) {

    return ;
}

void    HumanB::attack( void ) {

    if (this->_weap == NULL)
        std::cout << this->_name << " doesnt have weapons!" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon& weap ) {

    this->_weap = &weap;
}