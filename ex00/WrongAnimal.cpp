/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:15:24 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/20 15:38:12 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Constructor called by WrongAnimal" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( std::string type )
{
	std::cout << "Constructor called by WrongAnimal" << std::endl;
	this->type = type;
	return ;
}


WrongAnimal::WrongAnimal( const WrongAnimal& a )
{
	this->type = a.type;
	return ;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& a )
{
	this->type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called by WrongAnimal" << std::endl;
	return ;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);	
}

void	WrongAnimal::setType( std::string type )
{
	this->type = type;
	return ;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "No sound" << std::endl;
	return ;
}
