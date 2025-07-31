/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:43:39 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:45:50 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria ( const AMateria& a );
		const AMateria& operator=( const AMateria& a );
		virtual ~AMateria( void );
		std::string const & getType( void ) const; // Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );
};

#endif