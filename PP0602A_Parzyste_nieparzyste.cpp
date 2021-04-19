#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int n, liczba;
		bool position = true;
		cin >> n;
		vector <int> parzyste;
		vector <int> nieparzyste;
		while (n--)
		{
			cin >> liczba;
			if (position)
			{
				nieparzyste.push_back(liczba);
				position = false;
			}
			else
			{
				parzyste.push_back(liczba);
				position = true;
			}
		}
		for (auto element : parzyste)
		{
			cout << element << " ";
		}
		for (auto element : nieparzyste)
		{
			cout << element << " ";
		}
	}


	return 0;
}
