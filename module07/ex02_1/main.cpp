#include "Array.hpp"

bool	wantExit()
{
	std::string command;
	std::cout << "<Do u want exit?>" << std::endl;
	std::cout << ">YES\t\t\t >NO" << std::endl;

	std::getline(std::cin, command);
	if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
		return 1;
	return 0;
}

void	arrayInt(int n)
{
	try
	{
		Array<int> tmp(n);

		for (int count = 0; count < tmp.getLength(); ++count)
		{
			tmp[count] = count;
		}

		for (int count = tmp.getLength()-1; count >= 0; --count)
			std::cout << tmp[count] << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	std::cout << "---------------" << std::endl;
}

void	arrayDouble(int n)
{
	try
	{
		Array<double> tmp(n);

		for (int count = 0; count < tmp.getLength(); ++count)
		{
			tmp[count] = count + 0.75;
		}

		for (int count = tmp.getLength()-1; count >= 0; --count)
			std::cout << tmp[count] << '\n';
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
		std::cout << "---------------" << std::endl;
	
}

int		main()
{
	std::string command;
	while (true)
	{
		std::cout << "<select data type>" << std::endl;
		std::cout << "> 1. int" << std::endl; //ok
		std::cout << "> 2. double" << std::endl; //ok
		
		std::getline(std::cin, command);

		std::string size;
		std::cout << "<enter size array:> " << std::endl;
		std::getline(std::cin, size);
		
		if (command == "1")
			arrayInt(atoi(size.c_str()));
		else if (command == "2")
			arrayDouble(atoi(size.c_str()));
		else
			if (wantExit())
				break;	
	}
}