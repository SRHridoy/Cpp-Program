#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);

	freopen("outputf.in", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;

		int digitSum = 0;
		while (n > 0)
		{
			int lastDigit = n % 10;
			digitSum += lastDigit;
			n /= 10;
		}
		cout << digitSum << endl;
	}


	return 0;
}