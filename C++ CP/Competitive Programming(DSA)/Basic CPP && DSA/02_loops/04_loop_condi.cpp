#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double
using namespace std;

int main()
{
	/*int a = 2;
	int b = 3;
	//Valid
	cout << (a<=b) << endl;

	int c = 4;
	cout << ((b > a) && (b > c)) << endl;
	cout << ((b > a) || (b > c)) << endl;*/

	//done

	/*for (int i = 1; i <= 10; ++i)
	{
		cout << i << endl;
	}

	for (int i = 1; i <= 10; cout << i++ << endl)
	{

	}*/

	//Loop Nesting:
	/*int t;
	cin >> t;
	while(t--)
	{

		int n;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	}*/

	//Break, Continue:
	for (int j = 0; j < 10; ++j)
	{

		for (int i = 0; i < 10; ++i)
		{
			if (i == 8)
			{
				break;
			}
			if (i == 9)
			{
				continue;
			}
			cout << i << endl;
		}
	}

	return 0;
}