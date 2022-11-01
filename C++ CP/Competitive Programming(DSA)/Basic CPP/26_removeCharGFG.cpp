#include<bits/stdc++.h>
using namespace std;

int main()
{

	
	string s;
	cin >> s;

	/*int cntP = 0;*/
	int cntA = 0;
	int flag = 1;
	/*int cntL = 0;*/
	for (int i = 0; i < s.size()-2; ++i)
	{
		if (s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
		{
			cout << false;
			flag = 0;
			break;
		}
		else if(s[i] == 'A')
		{
			cntA++;
		}

	}
	if(cntA<2&&flag == 1)
	{
		cout << true;
	}

    return 0;
}