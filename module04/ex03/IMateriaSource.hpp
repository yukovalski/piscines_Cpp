/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:30:57 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 17:39:35 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource( ) {}
	virtual void		learnMateria( AMateria *materia ) = 0;
	virtual AMateria	*createMateria( std::string const &type) = 0;
};

#endif