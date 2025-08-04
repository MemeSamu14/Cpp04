/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 10:43:25 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ): Animal("cat")
{
	std::cout << "Constructor called by Cat" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat::Cat( const Cat& a ): Animal(a)
{
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	return ;
}

Cat&	Cat::operator=( const Cat& a )
{
	this->type = a.type;
	delete brain;
	this->brain = new Brain(*a.brain);
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Destructor called by Cat" << std::endl;
	delete	brain;
	return ;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miao Miao" << std::endl;
	return ;
}
