#include <iostream>
#include <vector>
#include <math.h>
//POSORTOWANIE PUNKTOW WZGLEDEM ICH ODLEGLOSCI OD POCZATKU UKLADU WSPOLRZEDNYCH I WYPISANIE PO KOLEI NAZW TYCH PUNKTOW I ICH WSPOLRZEDNYCH
using namespace std;
void quicksort(float* tablica, int lewy, int prawy);
float odleglosc(int x, int y);

int main()
{
	int N;
	cin >> N;
	for (int n = 0; n < N; n++)
	{
		int ilepunktow;
		cin >> ilepunktow;

		int iksy[ilepunktow]; //tablica przechowujaca wspolrzedne X
		int igreki[ilepunktow]; //i Y
		float odleglosci[ilepunktow]; //posortowane odleglosci

		vector <string> punkty;

		for (int i = 0; i < ilepunktow; i++) //wczytanie po kolei kazdego punktu
		{
			string punkt;
			cin >> punkt;

			punkty.push_back(punkt);
			cin >> iksy[i];
			cin >> igreki[i];

			odleglosci[i] = odleglosc(iksy[i], igreki[i]); //obliczenie odleglosci
		}

		float* p = new float[ilepunktow]; //dynamicznie alokowana tabela pomocniczna

		for (int i = 0; i < ilepunktow; i++)
		{
			p[i] = odleglosci[i];
		}


		quicksort(odleglosci, 0, ilepunktow - 1);//tutaj nastepuje sortowanie


		//rozwiazanie bardzo toporne, do kazdej komorki w posortowanej tabeli odleglosci porownuje po kolei odleglosci nieposortowane,
		//jesli jest match, to nastepuje wypisanie na ekranie z wlasciwej komorki tablic przechowujacych nazwe i wspolrzedne

		for (int i = 0, j = 0; i < ilepunktow; i++)
		{
			if (odleglosci[i] == p[j])
			{
				cout << punkty[j] << " " << iksy[j] << " " << igreki[j] << endl;
			}
			else
			{
				while (odleglosci[i] != p[j])
				{
					j++;
				}
				cout << punkty[j] << " " << iksy[j] << " " << igreki[j] << endl;
			}
			j = 0;
		}


		delete[] p;
	}


	return 0;
}


float odleglosc(int x, int y) //funkcja liczaca odleglosc miedzy punktami
{
	return sqrt(x * x + y * y);
}


void quicksort(float* tablica, int lewy, int prawy)
{
	float v = tablica[(lewy + prawy) / 2];
	int i, j;
	float x;
	i = lewy;
	j = prawy;
	do
	{
		while (tablica[i] < v)
			i++;
		while (tablica[j] > v)
			j--;
		if (i <= j)
		{
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > lewy)
		quicksort(tablica, lewy, j);
	if (i < prawy)
		quicksort(tablica, i, prawy);
}

