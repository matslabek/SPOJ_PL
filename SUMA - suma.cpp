#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a;
	int suma = 0;
	while ((scanf("%d", &a) == 1)) //TA JEDYNKA ZMIENILA WSZYSTKO, ACC
	{

		suma += a;
		cout << suma << endl;
	}

	return 0;
}
