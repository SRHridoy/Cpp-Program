#include<bits/stdc++.h>
using namespace std;

int main()
{

	
	string str;
	cin >> str;
	int flag = 0;
	for (int i = 0; i < str.size() / 2; ++i)
	{
		if (str[i]==str[str.size() - 1 - i])
		{
			continue;
		}
		else
		{
			cout << "Not Palindrome" << endl;
			flag = 1;
			break;
		}
	}
	if(flag != 1)
		cout << "Palindrome" << endl;
	

    return 0;
}