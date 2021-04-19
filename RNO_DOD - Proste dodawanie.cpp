#include <iostream>

using namespace std;
float adding()
{
	int n;
	cin >> n;
	float* tab;
	float sum = 0;
	tab = new float[n];
	float* p = tab;

	for (int i = 1; i <= n; i++)
	{
		cin >> *p;
		p++;
	}
	p = &tab[0];
	for (int i = 0; i < n; i++)
	{
		sum += *p;
		p++;
	}
	delete[] tab;
	return sum;
}

int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cout << adding() << endl;
	}
	return 0;
}
