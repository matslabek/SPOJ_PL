//https://pl.spoj.com/problems/KC009/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int l;
	string word;
	while (getline(cin, word))
	{
		l = word.length();
		for (int i = l - 1; i >= 0; i--)
		{
			cout << word[i];
		}
		cout << endl;
	}
	return 0;
}
