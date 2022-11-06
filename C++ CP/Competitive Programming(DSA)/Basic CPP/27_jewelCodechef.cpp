#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string j, s;
		cin >> j >> s;
		// cout << j << s;

		sort(j.begin(),j.end());
		sort(s.begin(),s.end());

		int i = 0;
		int cnt = 0;
		while(s[i]==j[i])
		{
			cnt++;
			i++;
		}
		cout << i << endl;
		/*cout << s << j;*/
	}



	return 0;
}