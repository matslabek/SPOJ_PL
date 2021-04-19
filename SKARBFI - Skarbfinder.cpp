#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int j = 0; j < N; j++)
	{
		int NS = 0, WE = 0;
		int n;
		int a, b;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> a >> b;
			switch (a)
			{
			case 0:
				NS += b;
				break;
			case 1:
				NS -= b;
				break;
			case 2:
				WE -= b;
				break;
			case 3:
				WE += b;
				break;
			}
		}
		if (WE == 0 && NS == 0) cout << "studnia\n";
		if (NS < 0) cout << "1 " << -NS << '\n';
		else if (NS > 0) cout << "0 " << NS << '\n';
		if (WE < 0) cout << "2 " << -WE << '\n';
		else if (WE > 0) cout << "3 " << WE << '\n';
	}

	return 0;
}
