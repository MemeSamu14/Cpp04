/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:38:43 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/21 17:46:11 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( void )
{
	return ;
}

AMateria::AMateria( std::string const& type )
{
	this->type = type;
	return ;
}

AMateria::AMateria( const AMateria& a )
{
	this->type = a.type;
	return ;
}

const AMateria& AMateria::operator=( const AMateria& a )
{
	this->type = a.type;
	return (*this);
}

AMateria::~AMateria ( void )
{
	return ;
}

std::string const& AMateria::getType( void ) const
{
	return (this->type);	
}

//	virtual void use( ICharacter& target );

void	AMateria::use( ICharacter& target )
{
	std::cout << "Nothing Happened to " << target.getName() << std::endl;
}

