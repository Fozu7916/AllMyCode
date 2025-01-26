#include <iostream>
#include <vector>
#include <string>
using namespace std;

// класс хеширования пароля
class HeshingPassword {
public:
	vector<char> baze;

// сам принцип хеширования таков: каждый символ  превращается в {asci номер символа + 12}
	const int incoming = 12;


// получить наш пароль
	string GetPas()
	{
		string result = "";
		for (int i = 0; i < baze.size(); i++)
		{
			result += baze[i];
		}
		return result;
	}
//записываем наш пароль из сроки в массив чаров
	void SetPas(string here)
	{
		baze.resize(here.length());
		for (int i = 0; i < here.length(); i++)
		{
			baze[i] = here[i];
	    }
	}
//сам процесс хеширования
	void HashPas(string here)
	{
		for (int i = 0; i < baze.size(); i++)
		{
			baze[i] = here[i] + incoming;
		}
	}

};
