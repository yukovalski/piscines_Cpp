/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:04 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 09:55:55 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	
public:
	Peon( std::string const &name );
	Peon( Peon const &peonCopy );
	~Peon();
	Peon	&operator=( Peon const &peonValue );
	
	void	getPolimorphed( ) const;
	
};

#endif