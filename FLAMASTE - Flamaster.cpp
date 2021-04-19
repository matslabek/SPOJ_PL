#include <iostream>
#include <string>
using namespace std;

int main()
{
	int c;
	cin >> c;
	for (int k = 1; k <= c; k++)
	{
		int counter = 0;//zmienna liczaca ilosc powtorzen danej litery
		string let;
		cin >> let;
		int l = let.length();
		int j = 0;//zmienna pomocnicza do petli while
		for (int i = 0; i <= l - 1; i++)
		{
			j = i;
			cout << let[i];//wypisuje litere na ekran
			while (let[j] == let[j + 1])//sprawdzenie ile razy dana litera sie powtorzyla
			{
				counter++;
				j++;
			}
			if (counter > 1)
			{
				cout << (counter + 1);
				i = j;
			}
			counter = 0;//przed przejsciem do kolejnego wyrazu zerujemy licznik

		}
		cout << endl;
	}


	return 0;
}
