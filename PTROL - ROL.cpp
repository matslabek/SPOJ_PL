#include <iostream>

using namespace std;

int main()
{
	int t, n;
	cin >> t;

	for (int y = 0; y < t; y++)
	{
		cin >> n;
		int liczby[n];
		for (int i = 0; i < n; i++)
		{
			cin >> liczby[i];
		}
		int j = liczby[0];
		for (int i = 0; i < n; i++)
		{
			liczby[i] = liczby[i + 1];
			if (i == n - 1) liczby[i] = j;
		}

		for (auto l : liczby)
		{
			cout << l << " ";
		}
	}



	return 0;
}
