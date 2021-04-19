#include <iostream>

using namespace std;
string polecenie;
int stosik[11];
int ile = 0;
int liczba;

void push(int liczba)
{
	if (ile == 10)
	{
		cout << ":(\n";
		return;
	}
	stosik[ile + 1] = liczba;
	ile++;
	cout << ":)\n";
}
void pop()
{
	if (ile == 0)
	{
		cout << ":(\n";
		return;
	}
	cout << stosik[ile] << endl;;
	ile--;
}
int main()
{
	do
	{
		cin >> polecenie;
		if (polecenie == "+")
		{
			cin >> liczba;
			push(liczba);
		}
		else if (polecenie == "-")
			pop();
		else break;
	} while (getline(cin, polecenie));

	return 0;
}
