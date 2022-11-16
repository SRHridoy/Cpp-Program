#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string jewel, stone;
		cin >> jewel >> stone;
		// cout << j << s;
		set<char>s;
		for (int i = 0; i < jewel.size(); i++)
		{
			s.insert(jewel[i]);
		}
		int cnt = 0;
		for (int i = 0; i < stone.size(); i++)
		{
			if (s.find(stone[i])!=s.end())
			{
				cnt++;
			}
			
		}
		
		cout << cnt << endl;
	}



	return 0;
}