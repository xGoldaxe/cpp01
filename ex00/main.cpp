/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:49:46 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 16:40:20 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

int main() {
    
    randomChump("Dragon");
    Zombie* lutin = newZombie("Lutin");
    lutin->announce();
    delete lutin;
    return (0);
}