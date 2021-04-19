#include <iostream>

using namespace std;

int main()
{
	char c;
	int32_t a, b;
	//Nieznana ilosc danych na wyjsciu
	while (cin >> c >> a >> b)
	{
		if (c == '+') cout << a + b;
		if (c == '-') cout << a - b;
		if (c == '*') cout << a * b;
		if (c == '/') cout << a / b; //dzielenie calkowite
		if (c == '%') cout << a % b;
		cout << endl;

	}

	return 0;
}

