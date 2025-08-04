/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:22:06 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:48:10 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
	public:
		Dog( void );
		Dog( const Dog& a );
		Dog&	operator=( const Dog& a );
		~Dog( void );
		void makeSound( void ) const;
};


#endif
