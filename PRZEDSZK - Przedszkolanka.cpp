#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		int a, b;
		cin >> a >> b;
		int c;
		if (a > b)
			c = a;
		else
			c = b;
		for (int i = c; i <= (a * b); i++)
		{
			if ((i % a == 0) && (i % b == 0))
			{
				cout << i;
				break;
			}
		} cout << endl;
	}

	return 0;
}
