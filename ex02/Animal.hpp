/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:07:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:37:35 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>


class	Animal
{
	protected:
		std::string	type;	
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& a );
	public:
		Animal&	operator=( const Animal& a );
		virtual ~Animal( void );
		std::string	getType( void ) const;
		void		setType( std::string type );
		virtual void makeSound( void ) const = 0;

};


#endif