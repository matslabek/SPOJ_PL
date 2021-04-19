#include <iostream>
#include <string>

using namespace std;

int main()
{
	string napis;
	double a, b, c;


	while (cin >> a >> b >> c)
	{
		//cout<< b*b-4*a*c <<endl;
		if ((b * b - 4 * a * c) < 0) cout << 0 << endl;
		else if ((b * b - 4 * a * c) == 0) cout << 1 << endl;
		else cout << 2 << endl;
	}



	return 0;
}
