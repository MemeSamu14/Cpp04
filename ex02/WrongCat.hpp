/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:22:06 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 15:49:03 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "Animal.hpp"

class WrongCat: public Animal
{
	private:
	public:
		WrongCat( void );
		WrongCat( std::string type );
		WrongCat( const WrongCat& a );
		WrongCat&	operator=( const WrongCat& a );
		~WrongCat( void );
};

#endif
