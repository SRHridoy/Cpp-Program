#include<bits/stdc++.h>
using namespace std;

int main()
{

	
	string str;
	cin >> str;

	string strRev;
	for(int i = str.size() - 1; i >=0; i--)
	{
		/*Not Recomended
		strRev+=str[i];*/

		strRev.push_back(str[i]);
	}
	cout << strRev;string str1, str2;

    return 0;
}