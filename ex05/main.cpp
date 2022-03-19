/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:49:46 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 20:36:39 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

int main() {

	Karen karenOriginel;

	karenOriginel.complain("INFO");
	karenOriginel.complain("WARNING");
	karenOriginel.complain("DEBUG");
	karenOriginel.complain("ERROR");
	karenOriginel.complain("???");
	karenOriginel.complain("ERROR");
	return (0);
}