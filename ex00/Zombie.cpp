/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:52:55 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 16:37:26 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

	return ;
}

Zombie::~Zombie( void ) {

	return ;
}

std::string	Zombie::getName( void )
{
    return (this->_name);
}

void	Zombie::announce( void )
{
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}