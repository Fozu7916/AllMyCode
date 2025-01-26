#include <iostream>

int Calculating()
{
	int a;  char h;  int b;
	std::cin >> a >> h >> b;
	if (h == '+')
	{
		
		std::cout<< a + b << std::endl;
		return a + b;
	}
	else if (h == '-')
	{
		
		std::cout << a + b << std::endl;
		return a - b;
	}
	else if (h == '*')
	{
		
		std::cout << a + b << std::endl;
		return a * b;
	}
	else if (h == '/')
	{
		double Da = a;
		double Db = b;		
		std::cout << Da / Db << std::endl;
		return Da / Db;
	}	
}
