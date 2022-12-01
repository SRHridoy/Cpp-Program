#include<bits/stdc++.h>
using namespace std;

int main()
{

	
	string str = "Hello";
	str[0] = 'Y';
	//str[0] = "Y";-->error
	cout << str << endl;

	//Size-->
	cout << str.size() << endl;
	for (int i = 0; i < str.size(); ++i)
	{
		cout << str[i] << endl;
	}
    return 0;
}