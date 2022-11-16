#include<bits/stdc++.h>
using namespace std;

int main()
{

	string str;
	cin >> str;
	string strRev;

	for(int i = str.size() - 1; i >= 0; i--)
	{
		strRev.push_back(str[i]);
	}

	//cout << strRev << endl;

	if(str == strRev)
		cout << "YES";
	else
		cout << "NO";

	
	

    return 0;
}