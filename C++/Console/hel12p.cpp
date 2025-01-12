#include <iostream>
#include <vector>
#include <string>
using namespace std;


class HeshingPassword {
public:
	vector<char> baze;
	const int incoming = 12;

	string GetPas()
	{
		string result = "";
		for (int i = 0; i < baze.size(); i++)
		{
			result += baze[i];
		}
		return result;
	}

	void SetPas(string here)
	{
		baze.resize(here.length());
		for (int i = 0; i < here.length(); i++)
		{
			baze[i] = here[i];
	    }
	}

	void HashPas(string here)
	{
		for (int i = 0; i < baze.size(); i++)
		{
			baze[i] = here[i] + incoming;
		}
	}

};
