/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:04:10 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 16:08:16 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Brain( void );
// Brain( const Brain& a );
// const Brain& operator=( const Brain& a );
// ~Brain( void );

Brain::Brain( void )
{
	std::cout << "Constructor called by Brain" << std::endl;
	return ;
}

Brain::Brain( const Brain& a )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
}

const Brain& Brain::operator=( const Brain& a )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Destructor called by Brain" << std::endl;
	return ;
}

