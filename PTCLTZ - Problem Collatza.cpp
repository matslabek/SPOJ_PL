#include <iostream>

using namespace std;

int dzielimy(int x, int c)
{
	if (x == 1)
		return c;
	else if (x % 2 == 0)
	{
		c++;
		return dzielimy(x / 2, c);
	}
	else
	{
		c++;
		return dzielimy(3 * x + 1, c);
	}

}

int main()
{
	int N;
	cin >> N;
	for (int n = 1; n <= N; n++)
	{
		int counter = 0;
		int s;
		cin >> s;
		cout << dzielimy(s, counter) << endl;
	}
	return 0;


}

