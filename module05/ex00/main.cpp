/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:17 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 11:26:51 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

std::string name[] = {
"\033[1;31mMichael Scott\033[0m",
"\033[1;31mDwight Schrute\033[0m",
"\033[1;31mJim Halpert\033[0m",
"\033[1;31mPam Beasley\033[0m",
"\033[1;31mRyan Howard\033[0m",
"\033[1;31mAndy Bernard\033[0m",
"\033[1;31mRobert California\033[0m",
"\033[1;31mHanibal Lecturer\033[0m",
};

void raiseGraide(Bureaucrat &worker)
{
	std::cout << "<Want to enter an arbitrary gradation?>\n<If not press ENTER>" << std::endl;

	std::string grade;
	try
	{
		std::getline(std::cin, grade);
		(grade == "") ? worker.incrementGrade() : worker.incrementGrade(std::atoi(grade.c_str()));
		std::cout << worker;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "if u see it, u - stupid\n";
	}	
}

void	lowerGrade(Bureaucrat &worker)
{
	std::cout << "<Want to enter an arbitrary gradation?>\n<If not press ENTER>" << std::endl;

	std::string grade;
	try
	{
		std::getline(std::cin, grade);
		(grade == "") ? worker.decrementGrade() : worker.decrementGrade(std::atoi(grade.c_str()));
		std::cout << worker;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "if u see it, u - stupid\n";
	}
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int num = rand() % (sizeof(name) / sizeof(name[0]));
	std::cout << "<You see " << name[num] << ">" << std::endl;
	std::cout << "<This is a new employee of your company!>" << std::endl << "<Give him grade:> ";

	std::string grade;
	std::getline(std::cin, grade);

	try
	{
		Bureaucrat worker(name[num], std::atoi(grade.c_str()));
			std::cout << "<Congratulations! you got your own bureaucrat.>" << std::endl;
		while(1)
		{
			std::cout << "\033[1;42mChose:\t\t 1.raise\t\t 2.lower\033[0m" << std::endl;
			std::getline(std::cin, grade);
			if (grade == "1")
				raiseGraide(worker);
			else if (grade == "2")
				lowerGrade(worker);
				else
			{
				std::cout << "<Do u want exit?>" << std::endl;
				std::cout << ">YES\t\t\t >NO" << std::endl;
				std::getline(std::cin, grade);
				if ( grade == "YES" || grade == "yes" || grade == "y" || grade == "Y")
					break;
			}
		}
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}