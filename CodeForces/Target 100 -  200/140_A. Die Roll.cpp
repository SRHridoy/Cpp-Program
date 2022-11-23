//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
    int y,w;
	cin>>y>>w;
	if(y<w) y=w;
	y=7-y;
	switch (y)
    {
		case 1:{cout<<"1/6";break;}
		case 2:{cout<<"1/3";break;}
		case 3:{cout<<"1/2";break;}
		case 4:{cout<<"2/3";break;}
		case 5:{cout<<"5/6";break;}
		case 6:{cout<<"1/1";break;}
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}