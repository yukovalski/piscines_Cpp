/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:13 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 10:13:17 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
private:
	std::string	m_name;
	
public:
	//Victim( );
	Victim( std::string const &name);
	Victim( Victim const &victimCopy );
	~Victim( );

	Victim		&operator=( Victim const &victimValue );
	void		setName( std::string const &newName );
	std::string	getName( ) const;
	void		getPolimorphed( ) const;
};

std::ostream	&operator<<( std::ostream &out, Victim const &victimValue );

#endif
