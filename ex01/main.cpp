/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:49:46 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:53:18 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
    
    Zombie* lutins = zombieHorde( 5, "Lutin" );
    
    for (int i = 0; i < 5; ++i) {
        std::cout << i << ": ";
        lutins->announce();
    }
    delete [] lutins;
    return (0);
}