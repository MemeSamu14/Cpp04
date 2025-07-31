/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:15:24 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 15:41:05 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Constructor called by Animal" << std::endl;
	return ;
}

Animal::Animal( std::string type )
{
	std::cout << "Constructor called by Animal" << std::endl;
	this->type = type;
	return ;
}


Animal::Animal( const Animal& a )
{
	this->type = a.type;
	return ;
}

Animal&	Animal::operator=( const Animal& a )
{
	this->type = a.type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Destructor called by Animal" << std::endl;
	return ;
}

std::string	Animal::getType( void ) const
{
	return (this->type);	
}

void	Animal::setType( std::string type )
{
	this->type = type;
	return ;
}

void	Animal::makeSound( void ) const
{
	std::cout << "No sound" << std::endl;
	return ;
}
