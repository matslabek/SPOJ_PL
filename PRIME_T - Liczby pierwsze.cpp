#include <iostream>

using namespace std;

int main()
{
	int n;
	int* liczby;
	int reszta;
	cin >> n;
	liczby = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> liczby[i];
		if (liczby[i] == 2) cout << "TAK" << endl;
		else if (liczby[i] == 1) cout << "NIE" << endl;
		else
		{
			for (int j = 2; j < liczby[i]; j++)
			{
				reszta = liczby[i] % j;
				if (reszta == 0)
				{
					cout << "NIE" << endl;
					break;
				}
				if (j == liczby[i] - 1)
					cout << "TAK" << endl;
			}
		}

	}
	delete[] liczby;

	return 0;
}
