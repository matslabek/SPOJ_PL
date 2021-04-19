#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int n = 1; n <= N; n++)
	{
		string a, b;
		int l;//zmienna pomocnicza rowna dlugosci krotszego stringa
		cin >> a >> b;
		if (a.length() > b.length())
		{
			l = b.length();
		}
		else
			l = a.length();
		string* tab;//wskaznik do dynamicznej alokacji tablicy
		tab = new string[2 * l];
		string* p = tab;//wskaznik dla przyspieszenia wczytywania znakow do tablicy

		for (int i = 0; i < l; i++)
		{
			*p = a[i];
			p++;
			*p = b[i];
			p++;
		}
		p = &tab[0];
		for (int j = 0; j < 2 * l; j++)
		{
			cout << *p;
			p++;
		}
		delete[] tab;
		cout << endl;
	}


	return 0;
}
