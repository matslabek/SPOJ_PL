#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string slowo;
		cin >> slowo;
		for (int i = 0; i < slowo.size() / 2; ++i)
		{
			cout << slowo[i];
		}
		cout << endl;
	}


	return 0;
}
