/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:10:35 by sgath             #+#    #+#             */
/*   Updated: 2021/06/07 14:37:03 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <string>

enum FuckMagic
{
	SUCCESS,
	ERROR_FAIL = 2,
	INCORRECT_NUMBER_OF_ARGUMENTS = 9999999,
	EMPTY_ARGUMENT,
	VALID_AV = 0,
	FILE_DOES_NOT_OPEN,
};

class Sed
{
private:
	std::string m_fileName;
	std::string m_s1;
	std::string m_s2;

public:
	Sed();
	Sed(char *name, char *s1, char *s2);
	~Sed();
	void	addFile();
	void	replace(std::string &str);
	static	int outputParam(int res);

};

#endif