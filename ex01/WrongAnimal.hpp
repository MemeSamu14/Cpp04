/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:07:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:38:36 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;	
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& a );
		WrongAnimal&	operator=( const WrongAnimal& a );
		virtual ~WrongAnimal( void );
		std::string	getType( void ) const;
		void		setType( std::string type );
		void		makeSound( void ) const;
};


#endif