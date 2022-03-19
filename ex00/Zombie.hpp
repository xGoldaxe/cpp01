/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:48:57 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 15:57:48 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#	define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string	_name;
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		std::string	getName( void );
		void	announce( void );

};



#endif