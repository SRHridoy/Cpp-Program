#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double
using namespace std;

int main()
{
/*#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);

	freopen("outputf.in", "w", stdout);
#endif*/


	   int t;
	   cin >> t;
	   while(t--)
	   {
	   	int n;
	   	cin >> n;

	   	int reverse = 0,reminder;
	   	while(n>0)
	   	{
	   		reminder = n % 10;
	   		reverse = reverse*10+reminder;
	   		n=n/10;
	   	}
	   	cout << reverse << endl;
	   }




    return 0;
}