#include <iostream>

using namespace std;

int silnia(int arg)
{
	if (arg == 0)
		return 1;
	else
		return silnia(arg - 1) * arg;
}
void cyfry(int n)
{
	cout << (n % 100) / 10 << " " << n % 10 << endl;
}

int main()
{
	int ile;
	cin >> ile;
	int liczba[ile];
	long wynik;
	for (int i = 0; i < ile; i++)
	{
		cin >> liczba[i];
		if (liczba[i] >= 10)//warunek kluczowy, bo od 10!> dziesiatki i jednosci zawsze wyniosa 0
		{
			cout << "0 0" << endl;
		}
		else
		{
			wynik = silnia(liczba[i]);
			cyfry(wynik);
		}

	}

	return 0;
}
