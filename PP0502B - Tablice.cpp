#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int* tab;
		int ile;
		cin >> ile;
		tab = new int[ile];
		for (int i = ile - 1; i >= 0; i--)
		{
			cin >> tab[i];
		}
		for (int i = 0; i <= ile - 1; i++)
		{
			cout << tab[i] << " ";
		}
		cout << endl;
		delete[]tab;

	}


	return 0;
}
