/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:07 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 10:14:35 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string	m_name;
	std::string	m_title;

public:
	//Sorcerer( );
	Sorcerer( std::string const &name, std::string const &title );
	Sorcerer( Sorcerer const &sorcererCopy );
	virtual ~Sorcerer();
	Sorcerer	&operator=( Sorcerer const &orcererValue );

	void		polymorph(Victim const &) const;
	std::string	getName( );
	std::string	getTitle( );
};

std::ostream	&operator<<(std::ostream &out, Sorcerer &sorcererValue) ;

#endif
