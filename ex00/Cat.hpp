/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:22:06 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 15:47:41 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"


class Cat: public Animal
{
	private:
	public:
		Cat( void );
		Cat( std::string type );
		Cat( const Cat& a );
		Cat&	operator=( const Cat& a );
		~Cat( void );
		void makeSound( void ) const;
};


#endif
