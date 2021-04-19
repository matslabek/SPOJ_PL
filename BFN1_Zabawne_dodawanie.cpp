//#BFN1 - Zabawne dodawanie piotrusia
//https://pl.spoj.com/problems/BFN1/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
bool palindrom(string a);
string odwroc(string b);
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int counter = 0;
		int liczba;
		cin >> liczba;
		string napis = to_string(liczba);//konwersja intu na string
		int odwliczba = liczba;

		while (palindrom(napis) == false)//petla wykonuje sie poki nie osiagniemy palindromu
		{
			string nodw = odwroc(napis); //odwracam napis
			stringstream strum(nodw);
			strum >> odwliczba;
			liczba += odwliczba;//sumuje liczbe i jej odwrocna wersje
			counter++; //zliczenie ilosc powtorzen
			napis = to_string(liczba); //updatuje napis
		}
		cout << napis << " " << counter << endl;
	}
	return 0;
}
bool palindrom(string a)//informuje czy napis jest palindromem
{
	bool flag = true;
	int w = a.length();
	int i = 0;
	int j = w - 1;//zmienne wskazujaca na poczatek i koniec stringa
	while (i != j && i < j)//petla konczy sie gdy zmienne sie spotkaja
	{
		if (a[i] != a[j])
		{
			flag = false;
			break;
		}
		i++;
		j--;
	}
	return flag;
}
string odwroc(string b)
{
	int w = b.length();
	int i = 0;
	int j = w - 1;
	char z;//pomocniczy czar do zapisu odwracanej litery
	while (i != j && i < j)//odwracanie stringa
	{
		z = b[i];
		b[i] = b[j];
		b[j] = z;
		i++;
		j--;
	}
	i = 0;
	while (b[i] == '0')//jesli w odwroconym napisie na poczatku sa zera
	{
		b.erase(i, 1);//to sa usuwane zeby nie zepsuly dodawania
	}
	return b;
}
