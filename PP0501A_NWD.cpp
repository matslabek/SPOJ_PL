//https://pl.spoj.com/problems/PP0501A/
//PP0501A_NWD
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int j = 1; j <= N; j++)
	{
		int a, b, c; //c sluzy do ustalenia mniejszej z liczb
		cin >> a >> b;
		if (a == 0)
		{
			cout << b << endl;
		}
		else if (b == 0)
		{
			cout << a << endl;
		}
		else
		{
			if (a < b)
			{
				c = a;
			}
			else
			{
				c = b;
			}

			for (int i = c; i >= 1; i--)
			{
				if ((b % i == 0) && (a % i == 0)) //w kazdym kroku dekrementuje licznik o jeden i sprawdzam czy obie liczby sa podzielne
				{
					cout << i << endl; //jesli znajde wspolny dzielnik to przerywam petle
					break;
				}
			}
		}
	}
	return 0;
}
