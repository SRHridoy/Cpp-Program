#include<bits/stdc++.h>
using namespace std;

int main()
{

	
	int n;
	cin >> n;
	int arr[n];
	long long int prod = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		prod=prod*arr[i]%(1000000000+7);
	}
	cout << prod;
		

    return 0;
}