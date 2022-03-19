/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:49:46 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:47:18 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

bool	isValidLevel( std::string level ) {
	
	std::string strs[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
	for (int i = 0; i < 4; ++i) {
		if (level == strs[i])
		{
			std::cout << "[ " << strs[i] << " ]" << std::endl;
			return (true);
		}
	}
	return (false);
}

int main(int argc, char **argv) {

	
	if (argc != 2 || !isValidLevel(argv[1]))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	Karen karenOriginel(argv[1]);

	karenOriginel.complain("DEBUG");
	karenOriginel.complain("INFO");
	karenOriginel.complain("WARNING");
	karenOriginel.complain("ERROR");
	karenOriginel.complain("???");
	karenOriginel.complain("ERROR");
	return (0);
}