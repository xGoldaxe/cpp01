/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:48:57 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 17:15:19 by pleveque         ###   ########.fr       */
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
		Zombie( void );
		~Zombie( void );
		std::string	getName( void );
		void	setName( std::string name );
		void	announce( void );

};



#endif