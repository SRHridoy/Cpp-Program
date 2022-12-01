#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ld long double
using namespace std;

int main()
{
//Calculation higher precedence e hoi-->
		// cout << 'c' + 1 << endl;
		// b = 3/2.0;
		// cout << 7*2/2 << endl;
		// cout << 7/2*2 << endl;
		// cout << a << endl;
		// cout << b << endl;
		// cout << b << endl;
		// double b = 3/2;-->1
		// int a = 3/2.0;-->1.5 calculate hobe but store hobe int e tai 1.

//Rough ranges:
	//    -10^9 < int < 10^9
	//    -10^12 < long int < 10^12
	//    -10^18 < long long int < 10^18

	/*int a = 100000;
	int b = 100000;
	int c = a*b;
	cout << c << endl;

	int max = INT_MAX;
	cout << max << endl;

	max = INT_MAX + 1;
	cout << max << endl;

	max = INT_MAX;
	cout << max + 1<< endl;*/

	/*long int a = 100000;
	long int b = 100000;
	long int c = a*b;
	cout << c << endl;*/

	/*int a = 100000;
	int b = 100000;
	long int c = a* 1LL *b;
	cout << c << endl;*/
/*
	double a = 100000;
	double b = 100000;
	double c = a*b;
	cout << c << endl;
	cout << fixed << c << endl;
	cout << fixed << setprecision(0) << c << endl;*/

	/*double c = 1e24;
	cout << fixed << c << endl;*/

	//Area of rectangle -->
	/*constrains --> l & b <= 10^9*/
	int l, b;
	cin >> l >> b;
	cout << l *1LL* b << endl;

    return 0;
}