/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:09:36 by sgath             #+#    #+#             */
/*   Updated: 2021/05/20 13:57:11 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
class Pony
{
	public:
		explicit Pony();
		Pony(std::string name, std::string gender,std::string harmony, 
			std::string colors, std::string age);
		~Pony();
		void outputPony();

	private:
		std::string	m_ponyDescription[5];
		static std::string m_dataPony[5];
		enum Description
		{
			NAME,
			GENDER,
			HARMONY,
			COLORS,
			AGE
		};
};

#endif